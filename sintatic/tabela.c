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
  printf("\n|======================TABELA DE SIMBOLOS========================|\n");
  printf("|= %10s | %s:%s | %5s | %11s | %7s =|\n", "IDENTIFICADOR", "LINHA", "COLUNA", "TYPE", "EH FUNCAO?", "ESCOPO");
  printf("|================|==============|=======|=============|==========|\n");
  
  for(int i=0; i<=size; i++) {
    printf("| %-14s | %3d:%-8d | %-5s | %-11d | %-8d |\n", tabelaSimbolos[i].corpo, tabelaSimbolos[i].linha,tabelaSimbolos[i].coluna, tabelaSimbolos[i].tipo, tabelaSimbolos[i].ehFuncao, tabelaSimbolos[i].escopo);
  }

  printf("|================================================================|\n");
}
