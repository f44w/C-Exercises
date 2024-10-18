#include <stdio.h>

int main(){
  char arr[4];
  printf("Enter a two-digit positive integer: ");
  scanf("%3s", arr);
  if (arr[2] != '\0' ){
    printf("Invalid input!\n");
    return 1;
  }
  if ((arr[0] > '9' || arr[0] < '0') || (arr[1] > '9' || arr[1] < '0' )){
    printf("Invalid input!\n");
    return 1;
  }
  if (arr[0] == '\0' || arr[1] == '\0'){
    printf("Invalid input!\n");
    return 1;
  }
  printf("The reversal is: %c%c\n", arr[1], arr[0]);

  return 0;
}
