#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void swap(int *current, int *next){
  int tmp = *current;
  *current = *next;
  *next = tmp;
}

int main(int argc, char const *argv[]){

  setlocale(LC_ALL, "Portuguese");

  int A[] = {9, 4, 3, 1, 5, 2}, i, j;
  int TAM = sizeof(A)/sizeof(A)[0];
  int LIMIT = TAM - 1;

  printf("\n👽 Listing the elements:\n");

  for (i = 0; i < TAM; i++){
    if(A[i]) printf("\n💀 The element has the value of %d", A[i]);
  }

  printf("\n\n🤖 Listing completed...\n\n");

  printf("👾 Apply bubble sort...\n\n");

  for(i = 0; i < LIMIT; i++){
    int LIMIT_PROX = LIMIT - i;
    for(j = 0; j < LIMIT_PROX; j++){
      int current = j, next = j+ 1;
      if(A[current] > A[next]){
        swap(&A[current], &A[next]);
      }
    }
  }

  printf("\n👽 Listing the elements:\n");

  for (i = 0; i < TAM; i++){
    if(A[i]) printf("\n💀 The element has the value of %d", A[i]);
  }

  printf("\n\n🤖 Listing completed...\n\n");

  return 0;
}
