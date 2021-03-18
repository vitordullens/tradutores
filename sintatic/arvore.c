#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

NodoArvore* criarNodo(char *val) {
  NodoArvore* novoNodo = (NodoArvore*) malloc(sizeof(NodoArvore));
  novoNodo->val = strdup(val);
  novoNodo->proximo = NULL;
  novoNodo->filho = NULL;
  novoNodo->simbolo = NULL;
  return novoNodo;
}

void freeArvore(NodoArvore *nodo) {
  if(!nodo) {
    return;
  }
  if(nodo->simbolo) {
    free(nodo->simbolo);
  }
  if(nodo->proximo){
    freeArvore(nodo->proximo);
  }
  if(nodo->filho) {
    freeArvore(nodo->filho);
  }
  free(nodo->val);
  free(nodo);

}

void printArvore(NodoArvore *nodo, int profundidade) {
  if (!nodo) {
    return;
  }

  if(profundidade == 0){
    printf("\n-------------------ARVORE SINTATICA-------------------\n");
    printf("%s\n", nodo->val);

  } else {
    for(int i=0; i<profundidade; i++) printf(" | ");
    printf("%s", nodo->val);
  }

  
  if(nodo->simbolo) {
    printf(" [ simbolo -> %s ]", nodo->simbolo->body);
  }

  if(profundidade>0) printf("\n");
  if(nodo->filho){
    printArvore(nodo->filho, profundidade+1);
  }


  if(nodo->proximo) {
    printArvore(nodo->proximo, profundidade);
  }

}