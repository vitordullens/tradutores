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

int checkDuplicado(char* corpo, int escopo, int size) {
  for(int i=0; i<=size; i++){
    if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == escopo){
      return 1;
    }
  }
  return 0;
  
}

int checkDeclarado(char* corpo, int escopo, int size, int ehFuncao, int listaEscopo[], int indiceEscopo){
  if(ehFuncao){
    for(int i=0; i<=size; i++){
      if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == escopo && tabelaSimbolos[i].ehFuncao == ehFuncao){
        return 1;
      }
    }
  }
  else {
    for(int j=indiceEscopo; j>=0; j--){
      for(int i =0; i<=size; i++) {
         if(strcmp(tabelaSimbolos[i].corpo, corpo) == 0 && tabelaSimbolos[i].escopo == listaEscopo[j] && tabelaSimbolos[i].ehFuncao == ehFuncao){
          return 1;
         }
      }
    }

  }
  return 0;
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
