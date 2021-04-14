#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

NodoArvore* retornaNodo() {
  NodoArvore* nodo = (NodoArvore*) malloc(sizeof(NodoArvore));
  nodo->proximo = NULL;
  nodo->filho = NULL;
  nodo->simbolo = NULL;
  nodo->tipo = NULL;
  nodo->cast = NULL;
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

void fazCast(NodoArvore* esquerda, NodoArvore* direita, int* erros, int linha, int coluna) {
  if(strcmp(esquerda->tipo, direita->tipo) == 0){
  } else if(strcmp(esquerda->tipo, "INT") == 0 && strcmp(direita->tipo, "FLOAT") == 0) {
    esquerda->tipo = strdup("FLOAT");
    esquerda->cast = strdup("int2float");
  } else if (strcmp(esquerda->tipo, "FLOAT") == 0 && strcmp(direita->tipo, "INT") == 0) {
    direita->tipo = strdup("FLOAT");
    direita->cast = strdup("int2float");
  } else if(strcmp(esquerda->tipo, "ELEM") == 0 && strcmp(direita->tipo, "FLOAT") == 0) {
    direita->tipo = strdup("ELEM");
    direita->cast = strdup("float2elem");
  } else if(strcmp(esquerda->tipo, "FLOAT") == 0 && strcmp(direita->tipo, "ELEM") == 0) {
    esquerda->tipo = strdup("ELEM");
    esquerda->cast = strdup("float2elem");
  } else if(strcmp(esquerda->tipo, "ELEM") == 0 && strcmp(direita->tipo, "INT") == 0) {
    direita->tipo = strdup("ELEM");
    direita->cast = strdup("int2elem");
  } else if(strcmp(esquerda->tipo, "INT") == 0 && strcmp(direita->tipo, "ELEM") == 0) {
    esquerda->tipo = strdup("ELEM");
    esquerda->cast = strdup("int2elem");
  } else if(strcmp(esquerda->tipo, "SET") == 0 && strcmp(direita->tipo, "ELEM") == 0) {
    esquerda->tipo = strdup("ELEM");
    esquerda->cast = strdup("set2elem");
  } else if(strcmp(esquerda->tipo, "ELEM") == 0 && strcmp(direita->tipo, "SET") == 0) {
    direita->tipo = strdup("ELEM");
    direita->cast = strdup("set2elem");
  } else{
    *erros += 1;
    printf("%-15s %d:%-3d - %s -> %s and %s\n", "SEMANTIC ERROR", linha, coluna, "Incompatible types can't be casted", esquerda->tipo, direita->tipo);
  }
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
  if(nodo->tipo !=NULL){
    free(nodo->tipo);
  }
  if(nodo->cast !=NULL){
    free(nodo->cast);
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
      printf("——— [ constante -> %s ]", nodo->simbolo->corpo);
    }
    else if(nodo->simbolo->isIdOrConst == 2) {
      printf("——— [ identificador -> %s ]", nodo->simbolo->corpo);
    }
    else if(nodo->simbolo->isIdOrConst == 3) {
      printf("——— [ operador -> %s ]", nodo->simbolo->corpo);
    }
    else {
      printf("ERRO");
    }
  }

  if(nodo->tipo != NULL) {
    printf("——— -> %s ", nodo->tipo);
  }

  if(nodo->cast != NULL) {
    printf("[ CAST -> %s ]", nodo->cast);
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