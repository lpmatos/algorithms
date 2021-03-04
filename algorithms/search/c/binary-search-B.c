#include <stdio.h>
#define sizeOfArray(x) (sizeof(x)/sizeof((x)[0]))

int binarySearch(int array[], int min, int max, int element){
  while (min <= max){
    int mid = min + (max - 1)/2;
    if(array[mid] == element) return mid;
    if(array[mid] < element) min = mid + 1;
    else max = min - 1;
  }
  return -1;
}

int main(int argc, char const *argv[]){
  int element, numbers[] = {1, 2, 3, 4, 8, 9, 20, 21, 22, 34, 54, 102, 283, 342, 402, 1000};
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
