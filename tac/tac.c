#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tac.h"
#include "arvore.h"

FILE *fp;

void escreveTabela(NodoArvore *nodo) {
   if (nodo == NULL) {
    return;
  }

  if(nodo->filho){
    escreveTabela(nodo->filho);
  }

  if(nodo->tac.tabela == 1){
     if(nodo->tac.instrucao) {
        fprintf(fp, "\t%s\n", nodo->tac.instrucao);
        free(nodo->tac.instrucao);
     }
  }
  if(nodo->proximo) {
    escreveTabela(nodo->proximo);
  }
}

void escreveTac(NodoArvore *nodo){
   fp = fopen("output_tac/output.tac", "w");
   fprintf(fp, ".table\n");
   escreveTabela(nodo);
   fprintf(fp, ".code\n");
   fclose(fp);
}