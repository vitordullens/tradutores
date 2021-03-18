#ifndef ARVORE
#define ARVORE

#include "tabela.h"

typedef struct NodoArvore NodoArvore;

struct NodoArvore {
  struct NodoArvore* proximo;
  struct NodoArvore* filho;
  Simbolo* simbolo;
  char* val;
};

NodoArvore* criarNodo(char*);
void printArvore(NodoArvore*, int);
void freeArvore(NodoArvore *);

#endif