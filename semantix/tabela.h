#ifndef TABELA
#define TABELA

typedef struct Escopo Escopo;
typedef struct Simbolo Simbolo;
typedef struct Token Token;
struct Simbolo {
  int linha;
  int coluna;
  int ehFuncao;
  int ehParametro;
  char tipo[100];
  char corpo[100];
  int escopo;
  int isIdOrConst;
};

Simbolo criarSimbolo(int, int, char*);

void printTabela(int);

#endif