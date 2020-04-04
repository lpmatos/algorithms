#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  
  int A[] = {1,22,32,49,50,51,53,80,91,100,102}, i, valor;
  int TAM = sizeof(A)/sizeof(A)[0];
  bool found = false;

  printf("\nListando os elementos:\n");

  for (i = 0; i < TAM; i++){
    if(A[i]) printf("\nO elemento tem o valor de %d", A[i]);
  }
  
  printf("\n\nListagem concluida...\n\n");  

  printf("Nos diga o valor que voce deseja procurar: ");
  scanf("%d", &valor);
  printf("O valor escolhido foi %d. Iremos procura-lo...", valor);

  int min = 0;
  int max = TAM - 1;

  while (min <= max)
  {
    int mid = (min + max) / 2;
    if(valor < A[mid]){
      max = mid - 1;
    }else if(valor > A[mid]){
      min = mid + 1;
    }else if(valor == A[mid]){
      printf("\n\nO elemento %d foi encontrado...\n\n", valor);
      found = true;
      break;
    }
  }

  if(!found){
    printf("\n\nO elemento %d nao foi encontrado...\n\n", valor);
  }

  return 0;
}
