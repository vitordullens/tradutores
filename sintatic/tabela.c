#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tabela.h"

int escopoAtual(Escopo* escopo) {
  return escopo->pilhaEscopo[escopo->idx];
}

void adicionarEscopo(Escopo* escopo){
  escopo->idx++;
  escopo->proximo++;
  escopo->pilhaEscopo[escopo->idx] = escopo->proximo;
}

void removerEscopo(Escopo* escopo) {
  escopo->idx--;
}

Simbolo criarSimbolo(int linha, int coluna, char* body) {
  Simbolo s;
  s.body = strdup(body);
  s.linha = linha;
  s.coluna = coluna;
  
  return s;
}

Simbolo* criarSimboloArvore(int linha, int coluna, char* body) {
  Simbolo* s = (Simbolo*) malloc(sizeof(Simbolo));
  s->body = strdup(body);
  s->linha = linha;
  s->coluna = coluna;
  return s;
}


void printTabela(int size) {
  if (size == -1) return;
  printf("|=================TABELA DE SIMBOLOS==================|\n");
  printf("|= %10s | %s:%s | %5s | %5s =|\n", "IDENTIFICADOR", "LINHA", "COLUNA", "TYPE", "EH FUNCAO?");
  printf("|================|==============|=======|=============|\n");
  
  for(int i=0; i<=size; i++) {
    printf("| %-14s | %2d:%-9d | %-5s | %-11d |\n", tabelaSimbolos[i].body, tabelaSimbolos[i].linha,tabelaSimbolos[i].coluna, tabelaSimbolos[i].tipo, tabelaSimbolos[i].ehFuncao);
  }

  printf("|=====================================================|\n");
}
