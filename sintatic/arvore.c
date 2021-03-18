#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

NodoArvore* criarNodo(char *val) {
  NodoArvore* novoNodo = (NodoArvore*) malloc(sizeof(NodoArvore));
  novoNodo->val = strdup(val);
  return novoNodo;
}

void printArvore(NodoArvore *nodo, int profundidade) {
  if (!nodo) {
    return;
  }

  for(int i=0; i<profundidade; i++) printf(" | ");
  printf("%s", nodo->val);

  
  if(nodo->simbolo) {
    printf(" %s", nodo->simbolo->body);
  }

  if(profundidade>0) printf("\n");
  if(nodo->filho){
    printArvore(nodo->filho, profundidade+1);
  }


  if(nodo->proximo) {
    printArvore(nodo->proximo, profundidade);
  }

}