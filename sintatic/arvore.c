#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

NodoArvore* retornaNodo() {
  NodoArvore* nodo = (NodoArvore*) malloc(sizeof(NodoArvore));
  nodo->proximo = NULL;
  nodo->filho = NULL;
  nodo->simbolo = NULL;
  return nodo;
}

Simbolo* criarSimboloArvore(int linha, int coluna, char* corpo, int isIdOrConst) {
  Simbolo* s = (Simbolo*) malloc(sizeof(Simbolo));
  s->isIdOrConst = isIdOrConst;
  strcpy(s->corpo, corpo);
  s->linha = linha;
  s->coluna = coluna;
  return s;
}

void freeArvore(NodoArvore *nodo) {
  if(nodo == NULL) {
    return;
  }
  if(nodo->simbolo != NULL) {
    free(nodo->simbolo);
  }
  if(nodo->proximo != NULL){
    freeArvore(nodo->proximo);
  }
  if(nodo->filho != NULL) {
    freeArvore(nodo->filho);
  }
  free(nodo);

}

void printArvore(NodoArvore *nodo, int profundidade) {
  if (nodo == NULL) {
    return;
  }

  if(profundidade == 0){
    printf("\n-------------------ARVORE SINTATICA-------------------\n");
    printf("%s\n", nodo->val);

  } else {
    for(int i=0; i<profundidade; i++){
      printf(" | ");
    } 
    printf("%s", nodo->val);
  }

  
  if(nodo->simbolo != NULL) {
    if(nodo->simbolo->isIdOrConst == 1) {
      printf(" [ constante -> %s ]", nodo->simbolo->corpo);
    }
    else if(nodo->simbolo->isIdOrConst == 2) {
      printf(" [ identificador -> %s ]", nodo->simbolo->corpo);
    }
    else {
      printf("ERRO");
    }
  }

  if(profundidade >= 1) {
    printf("\n");
  }
  if(nodo->filho){
    printArvore(nodo->filho, profundidade+1);
  }
  if(nodo->proximo) {
    printArvore(nodo->proximo, profundidade);
  }

}