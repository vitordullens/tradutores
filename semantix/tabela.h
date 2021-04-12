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
  char tipo[8];
  char corpo[50];
  int escopo;
  int isIdOrConst;
  int quantidadeParams;
  char params[1000][50];
  char tipoParams[1000][8];
};

Simbolo criarSimbolo(int, int, char*);

void printTabela(int);

int checkDeclarado(char*, int, int, int, int[], int);

#endif