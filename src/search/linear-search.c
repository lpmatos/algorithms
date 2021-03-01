#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define MAX 10

int main(int argc, char const *argv[]){

  setlocale(LC_ALL, "Portuguese");
  int A[MAX], i, valor;
  bool found = false;

  printf("\nFilling the vector...\n");
  for (i = 0; i < MAX; i++){ A[i] = i + 1;}

  printf("\nWhat value do you want to seek? ");
  scanf("%d", &valor);

  printf("\nThe chosen element was %d. We will look for you...\n", valor);

  for (i = 0; i < MAX; i++){
    if(A[i] == valor){
      printf("\n\nThe element %d was found 👽...\n\n", valor);
      found = true;
    }
  }

  if(!found){printf("\n\nThe element %d wasn't found 👽...\n\n", valor);}

  return 0;
}
