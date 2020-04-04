#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<locale.h>
#define MAX 10

int main(int argc, char const *argv[]){
	
  setlocale(LC_ALL, "Portuguese");
  int A[MAX], i, valor;
  bool found = false;

  printf("\nPopulando o vetor...\n");
  for (i = 0; i < MAX; i++){
    A[i] = i + 1;
  }

  printf("\nQual valor que você deseja buscar no vetor? ");
  scanf("%d", &valor);
  
  printf("\nO elemento escolhido foi o %d. Iremos procurá-lo no vetor...\n", valor);

  for (i = 0; i < MAX; i++){
    if(A[i] == valor){
      printf("\nO elemento %d foi encontrado!\n", valor);
      found = 1;
    }
  }
  
  if(!found){
    printf("\nO elemento %d não foi encontrado...\n", valor);
  }
  
  return 0;
}

