#include <stdio.h>
#define sizeOfArray(x) (sizeof(x)/sizeof((x)[0]))

void linearSearch(int arr[], int len, int element){
  int left = 0;
  int position = -1;
  int right = len - 1;
  for (left  = 0; left  <= right;) {
    if (arr[left] == element){
      position = left;
      printf("👽 Element found in Array at %d Position with %d Attempt\n", position + 1, left + 1);
      break;
    }
    if (arr[right] == element){
      position = right;
      printf("👽 Element found in Array at %d Position with %d Attempt\n", position + 1, len - right);
      break;
    }
    left++;
    right--;
  }
  if (position == -1)
    printf("👽 Not found in Array with %d Attempt\n", left);
}

int main(int argc, char const *argv[]){
  int element, numbers[] = {1, 2, 3, 4, 5};
  int tam = sizeOfArray(numbers);

  printf("\n👽 Tell me a number: ");
  scanf("%d", &element);
  printf("👽 The number that you chose is: %d\n", element);

  linearSearch(numbers, tam, element);
  return 0;
}
