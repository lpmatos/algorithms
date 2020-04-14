#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define MAX 10

int main(int argc, char const *argv[]){
	
  setlocale(LC_ALL, "Portuguese");
  int A[MAX], i, valor;
  bool found = false;

  printf("\nPopulando o vetor...\n");
  for (i = 0; i < MAX; i++){
    A[i] = i + 1;
  }

  printf("\nQual valor que voce deseja buscar no vetor? ");
  scanf("%d", &valor);
  
  printf("\nO elemento escolhido foi o %d. Iremos procura-lo no vetor...\n", valor);

  for (i = 0; i < MAX; i++){
    if(A[i] == valor){
      printf("\nO elemento %d foi encontrado!\n", valor);
      found = true;
    }
  }
  
  if(!found){
    printf("\nO elemento %d nao foi encontrado...\n", valor);
  }
  
  return 0;
}
