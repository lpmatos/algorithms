#include <stdio.h>
#define sizeOfArray(x) (sizeof(x)/sizeof((x)[0]))

// Function thar apply linear search logic.
int linearSearch(int arr[], int len, int element){
  int count = 0;
  for (count = 0; count < len; count++) if(arr[count] == element) return count;
  return -1;
}

int main(int argc, char const *argv[]){
  int element, numbers[] = {1, 2, 99, 3, 4, 5, 6, 10, 43, 11};
  int tam = sizeOfArray(numbers);

  printf("\nTell me a number: ");
  scanf("%d", &element);
  printf("The number that you chose is: %d", element);

  int result = linearSearch(numbers, tam, element);

  (result == -1)
        ? printf("\nElement is not present in array\n")
        : printf("\nElement is present at index %d\n", result);
  return 0;
}
