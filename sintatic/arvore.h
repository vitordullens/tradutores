#ifndef ARVORE
#define ARVORE

#include "tabela.h"

typedef struct NodoArvore NodoArvore;

void printArvore(NodoArvore*, int);
void freeArvore(NodoArvore *);

struct NodoArvore {
  struct NodoArvore* filho;
  Simbolo* simbolo;
  char* val;
  struct NodoArvore* proximo;
};

NodoArvore* criarNodo(char*);

#endif