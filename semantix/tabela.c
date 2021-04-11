#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tabela.h"

Simbolo tabelaSimbolos[1000000];

Simbolo criarSimbolo(int linha, int coluna, char* corpo) {
  Simbolo s;
  strcpy(s.corpo, corpo);
  s.linha = linha;
  s.coluna = coluna;
  
  return s;
}


void printTabela(int size) {
  if (size == -1) return;
  printf("\n|================================TABELA DE SIMBOLOS==================================|\n");
  printf("|= %-29s | %s:%s | %5s | %15s | %7s =|\n", "IDENTIFICADOR", "LINHA", "COLUNA", "TIPO", "PARAM/VAR/FUNC", "ESCOPO");
  printf("|================================|==============|=======|=================|==========|\n");
  
  for(int i=0; i<=size; i++) {
    if(tabelaSimbolos[i].ehFuncao){
      printf("| %-30s | %3d:%-8d | %-5s | %-15s | %-8d |\n", tabelaSimbolos[i].corpo, tabelaSimbolos[i].linha,tabelaSimbolos[i].coluna, tabelaSimbolos[i].tipo, "FUNC", 0);
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
