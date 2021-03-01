#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){

  int A[] = {1,22,32,49,50,51,53,80,91,100,102}, i, valor;
  int TAM = sizeof(A)/sizeof(A)[0];
  bool found = false;

  printf("\nList elements:\n");

  for (i = 0; i < TAM; i++){ if(A[i]) printf("\nElement value: %d", A[i]); }

  printf("\n\nFinish list...\n\n");

  printf("Tell me the value that you want find: ");
  scanf("%d", &valor);
  printf("The chosen value is %d. We will look for you...", valor);

  int min = 0;
  int max = TAM - 1;

  while (min <= max){
    int mid = (min + max) / 2;
    if(valor < A[mid]){
      max = mid - 1;
    }else if(valor > A[mid]){
      min = mid + 1;
    }else if(valor == A[mid]){
      printf("\n\nThe element %d was found 👽...\n\n", valor);
      found = true;
      break;
    }
  }

  if(!found){printf("\n\nThe element %d wasn't found 👽...\n\n", valor);}

  return 0;
}
