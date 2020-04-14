#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void swap(int *atual, int *prox){
  int tmp = *atual;
  *atual = *prox;
  *prox = tmp;
}

int main(int argc, char const *argv[]){

  setlocale(LC_ALL, "Portuguese");

  int A[] = {9, 4, 3, 1, 5, 2}, i, j;
  int TAM = sizeof(A)/sizeof(A)[0];
  int LIMIT = TAM - 1;

  printf("\nListando os elementos:\n");

  for (i = 0; i < TAM; i++){
    if(A[i]) printf("\nO elemento tem o valor de %d", A[i]);
  }
  
  printf("\n\nListagem concluida...\n\n");  

  printf("Apply Buuble Sort...\n\n");

  for(i = 0; i < LIMIT; i++){
    int LIMIT_PROX = LIMIT - i;
    for(j = 0; j < LIMIT_PROX; j++){
      int atual = j, prox = j+ 1;
      if(A[atual] > A[prox]){
        swap(&A[atual], &A[prox]);
      }
    }
  }

  printf("\nListando os elementos:\n");

  for (i = 0; i < TAM; i++){
    if(A[i]) printf("\nO elemento tem o valor de %d", A[i]);
  }
  
  printf("\n\nListagem concluida...\n\n");  

  return 0;
}
