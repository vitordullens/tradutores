#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tac.h"
#include "arvore.h"
#include "funcoesTac.c"

FILE *fp;

int regTemp = 0;
char v[110];
char temp[10];
int flagReturn0 = 0;

Tac* criarTac(char* op, char* arg1, char* arg2, char* res, int nargs){
   Tac* t = (Tac*) malloc(sizeof(Tac));
   t->op = op ? strdup(op) : NULL;
   t->arg1 = arg1 ? strdup(arg1) : NULL;
   t->arg2 = arg2 ? strdup(arg2) : NULL;
   t->res = res ? strdup(res) : NULL;
   t->nargs = nargs;
   t->instrucao = NULL;
   t->tabela = 0;
   t->cast = NULL;
   return t;
}

char* getFreeRegTemp(){
   snprintf(temp, 10, "$%d", regTemp);
   regTemp++;
   return temp;
}

char *variavel_escopo(char* corpo, int escopo) {
   snprintf(v, 110, "%s_%d", corpo, escopo);
   return v;
}

void escreveTabela(NodoArvore *nodo) {
   if (nodo == NULL) {
    return;
  }

  if(nodo->filho){
    escreveTabela(nodo->filho);
  }

  if(nodo->tac) {
   if(nodo->tac->tabela == 1){
      if(nodo->tac->instrucao) {
         fprintf(fp, "\t%s\n", nodo->tac->instrucao);
         free(nodo->tac->instrucao);
      }
   }
  } 
  if(nodo->proximo) {
    escreveTabela(nodo->proximo);
  }
}

void escreveCode(NodoArvore *nodo) {
   if (nodo == NULL) {
    return;
  }

  if(nodo->filho){
     if(nodo->tac){
         if(nodo->tac->nargs == 0) {
            if(flagReturn0) fprintf(fp, "\treturn 0\n");
            fprintf(fp, "%s:\n", nodo->tac->op);
            free(nodo->tac->op);
            flagReturn0 = 1;
         }
     }
      escreveCode(nodo->filho);
  }

  if(nodo->tac) {
   if(nodo->tac->cast){
      fprintf(fp, "\t%s %s, %s\n", nodo->tac->cast->op, nodo->tac->cast->res, nodo->tac->cast->arg1);;
      free(nodo->tac->cast->op);
      free(nodo->tac->cast->arg1);
      free(nodo->tac->cast->res);
      free(nodo->tac->cast);
   }
   if(nodo->tac->nargs == 1){
      fprintf(fp, "\t%s %s\n", nodo->tac->op, nodo->tac->arg1);
      free(nodo->tac->op);
      free(nodo->tac->arg1);
   }
   if(nodo->tac->nargs == 2){
      fprintf(fp, "\t%s %s, %s\n", nodo->tac->op, nodo->tac->res, nodo->tac->arg1);
      free(nodo->tac->op);
      free(nodo->tac->arg1);
      free(nodo->tac->res);
   }
   if(nodo->tac->nargs == 3){
      fprintf(fp, "\t%s %s, %s, %s\n", nodo->tac->op, nodo->tac->res, nodo->tac->arg1, nodo->tac->arg2);
      if(nodo->tac->instrucao) {
         fprintf(fp, "\t%s\n", nodo->tac->instrucao);
         free(nodo->tac->instrucao);
      }
      free(nodo->tac->op);
      free(nodo->tac->arg1);
      free(nodo->tac->arg2);
      free(nodo->tac->res);
   }
   if(nodo->tac2) {
      if(nodo->tac2->nargs == 1) {
         fprintf(fp, "\t%s %s\n", nodo->tac2->op, nodo->tac2->arg1);
         free(nodo->tac2->op);
         free(nodo->tac2->arg1);
      }
      if(nodo->tac2->nargs == 2) {
         fprintf(fp, "\t%s %s, %s\n", nodo->tac2->op, nodo->tac2->res, nodo->tac2->arg1);
         free(nodo->tac2->op);
         free(nodo->tac2->arg1);
         free(nodo->tac2->res);
      }
      if(nodo->tac2->nargs == -1) {
         fprintf(fp, "%s:\n", nodo->tac2->op);
         free(nodo->tac2->op);
      }
   }
   if(nodo->tac->nargs == -1) {
      free(nodo->tac->res);
   }
   if(nodo->tac->nargs == -2){
      fprintf(fp, "%s:\n", nodo->tac->op);
      free(nodo->tac->op);
   }
   free(nodo->tac);
   free(nodo->tac2);
  }
  if(nodo->proximo) {
    escreveCode(nodo->proximo);
  }
}

void escreveTac(NodoArvore *nodo){
   fp = fopen("output_tac/output.tac", "w");
   fprintf(fp, ".table\n");
   escreveTabela(nodo);
   fprintf(fp, ".code\n");
   fprintf(fp, "///////// funcoes predefinidas\n\n");
   fprintf(fp, "%s", PRINTAR);
   fprintf(fp, "\n/////////\n");
   escreveCode(nodo);
   fprintf(fp, "\n\nEND: nop\n");
   fclose(fp);
}