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