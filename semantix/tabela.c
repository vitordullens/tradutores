#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tabela.h"

Simbolo tabelaSimbolos[10000];

Simbolo criarSimbolo(int linha, int coluna, char* corpo) {
  Simbolo s;
  strcpy(s.corpo, corpo);
  s.linha = linha;
  s.coluna = coluna;
  
  return s;
}

int checkMain(int size){
  for(int i=0; i<=size; i++){
      if(strcmp(tabelaSimbolos[i].corpo, "main") == 0 && tabelaSimbolos[i].escopo == 0){
        return 1;
      }
    }
  return 0;
}

int checkTipoRetorno(char* corpo, int size) {
  for(int i=size; i>=0; i--) {
    if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == 0 && tabelaSimbolos[i].ehFuncao == 0) {
      return i;
    }
  }
  return -1;
}

int checkDuplicado(char* corpo, int escopo, int size) {
  for(int i=0; i<=size; i++){
    if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == escopo){
      return 1;
    }
  }
  return 0;
  
}

int checkQuantidadeParametros(char* corpo, int linha, int coluna, int escopo, int size, int listaEscopo[], int indiceEscopo, int quantidadeParams) {
  int idx = retornaIndiceFuncao(corpo, escopo, size, listaEscopo, indiceEscopo);
  if(idx == -1) return 1;
  if(tabelaSimbolos[idx].quantidadeParams == quantidadeParams) return 1;
  if(tabelaSimbolos[idx].quantidadeParams > quantidadeParams) printf("%-15s %d:%-3d - %s '%s' - expected: %d , received: %d\n", "SEMANTIC ERROR", linha, coluna, "Fewer number of arguments in ", corpo, tabelaSimbolos[idx].quantidadeParams, quantidadeParams);
  if(tabelaSimbolos[idx].quantidadeParams < quantidadeParams) printf("%-15s %d:%-3d - %s '%s' - expected: %d , received: %d\n", "SEMANTIC ERROR", linha, coluna, "Greater number of arguments in ", corpo, tabelaSimbolos[idx].quantidadeParams, quantidadeParams);
  return 0;
}

int retornaIndiceFuncao(char* corpo, int escopo, int size, int listaEscopo[], int indiceEscopo){
  for(int i=0; i<=size; i++){
      if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == escopo && tabelaSimbolos[i].ehFuncao == 1){
        return i;
      }
    }
    return -1;
}


int checkDeclarado(char* corpo, int escopo, int size, int ehFuncao, int listaEscopo[], int indiceEscopo){
  if(ehFuncao){
    for(int i=0; i<=size; i++){
      if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == escopo && tabelaSimbolos[i].ehFuncao == ehFuncao){
        return i;
      }
    }
  }
  else {
    for(int j=indiceEscopo; j>=0; j--){
      for(int i =0; i<=size; i++) {
         if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == listaEscopo[j] && tabelaSimbolos[i].ehFuncao == ehFuncao){
          return i;
         }
      }
    }

  }
  return -1;
}

void printTabela(int size) {
  if (size == -1) return;
  printf("\n|================================TABELA DE SIMBOLOS==================================|\n");
  printf("|= %-29s | %s:%s | %5s | %15s | %7s =|\n", "IDENTIFICADOR", "LINHA", "COLUNA", "TIPO", "PARAM/VAR/FUNC", "ESCOPO");
  printf("|================================|==============|=======|=================|==========|\n");
  
  for(int i=0; i<=size; i++) {
    if(tabelaSimbolos[i].ehFuncao){
      printf("| %-30s | %3d:%-8d | %-5s | %-15s | %-8d |\n", tabelaSimbolos[i].corpo, tabelaSimbolos[i].linha,tabelaSimbolos[i].coluna, tabelaSimbolos[i].tipo, "FUNC", tabelaSimbolos[i].escopo);
      
      // print para ajudar visualização dos dados da funcao
      if(0){
        printf("|%84s└ quantidade de params: %d - params: ", "", tabelaSimbolos[i].quantidadeParams);
        for(int j = tabelaSimbolos[i].quantidadeParams-1; j>0; j--){
          printf("%s %s, ", tabelaSimbolos[i].tipoParams[j], tabelaSimbolos[i].params[j]);
        }
        printf("%s %s\n", tabelaSimbolos[i].tipoParams[0], tabelaSimbolos[i].params[0]);
      }
    }
    else if(tabelaSimbolos[i].ehParametro){
      printf("| %-30s | %3d:%-8d | %-5s | %-15s | %-8d |\n", tabelaSimbolos[i].corpo, tabelaSimbolos[i].linha,tabelaSimbolos[i].coluna, tabelaSimbolos[i].tipo, "PARAM", tabelaSimbolos[i].escopo);
    }
    else {
      printf("| %-30s | %3d:%-8d | %-5s | %-15s | %-8d |\n", tabelaSimbolos[i].corpo, tabelaSimbolos[i].linha,tabelaSimbolos[i].coluna, tabelaSimbolos[i].tipo, "VAR", tabelaSimbolos[i].escopo);
    }
  }

  printf("|====================================================================================|\n");
}
