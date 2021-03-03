#include <stdio.h>
#define sizeOfArray(x) (sizeof(x)/sizeof((x)[0]))

int binarySearch(int array[], int min, int max, int element){
  // No mínio o maior valor precisar ser maior ou igual ao menor.
  // Temos que fazer isso pois não tem um laço de repetição percorrrendo nosso array.
  if (max >= min) {
    int mid = min + (max - 1)/2;
    if(array[mid] == element) return mid;
    if(array[mid] < element) return binarySearch(array, mid + 1, max, element);
    else return binarySearch(array, min, mid - 1, element);
  }
  return -1;
}

int main(int argc, char const *argv[]){
  int element, numbers[] = {1};
  int tam = sizeOfArray(numbers);

  printf("👽 Array size of: %d\n\n", tam);

  printf("🤖 Tell me a number: ");
  scanf("%d", &element);
  printf("🤖 The number that you chose is: %d\n\n", element);

  int result = binarySearch(numbers, 0, tam - 1, element);

  (result == -1)
        ? printf("👽 Element is not present in array\n")
        : printf("👽 Element is present at index %d\n", result);

  return 0;
}
