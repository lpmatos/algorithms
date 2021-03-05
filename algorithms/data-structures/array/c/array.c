#include <stdio.h>
#define MAX 5

int main(int argc, char const *argv[]){
  int array[MAX], i;
  array[0] = 5;
  array[3/2] = 2;
  array[2] = -10;
  array[3] = array[0];
  array[4] = array[1];

  printf("\nTamanho do array: %d", MAX);
  printf("\nDescrevendo elementos: %d %d %d %d %d\n\n", array[0], array[1], array[2], array[3], array[4]);

  for(i = 1; i <= MAX; i++){
    printf("Elemento array[%d] - Valor %d - Endereço de memória %d\n", i, array[i], &array[i]);
  }

  int numbers[] = {10, 20, 30, 40, 50, 60};
  int *p = numbers;

  printf("\nSize of numbers[] %ld\n", sizeof(numbers));
  printf("Size of p %ld\n", sizeof(p));

  printf("\nValor do primeiro elemento = %d\n", *p);
  printf("Valor do segundo elemento = %d\n", *(p + 1));
  printf("Valor do numbers[1] = %d\n", numbers[1]);
  printf("Valor de *(numbers + 1) = %d\n", *(numbers + 1));
  printf("Valor de p[1] = %d\n", p[1]);
  printf("Valor de  *(p + 1) = %d\n", *(p + 1));

  return 0;
}
