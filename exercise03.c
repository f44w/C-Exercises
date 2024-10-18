#include <stdio.h>

static const int digits[10][7] ={
  // 0:
  {1,1,1,0,1,1,1},
  // 1:
  {0,0,1,0,0,1,0},
  // 2:
  {1,0,1,1,1,0,1},
  // 3:
  {1,0,1,1,0,1,1},
  // 4:
  {0,1,1,1,0,1,0},
  // 5:
  {1,1,0,1,0,1,1},
  // 6:
  {1,1,0,1,1,1,1},
  // 7:
  {1,0,1,0,0,1,0},
  // 8:
  {1,1,1,1,1,1,1},
  // 9:
  {1,1,1,1,0,1,0}
};

void print_digit(int digit);

int main(){
  char arr[1];
  while(1){
    printf("Enter a single digit (0-9): \n");
    scanf("%s", arr);

    // Check for quit condition:
    if(arr[0] == 'q'){
      return 0;
    }
    // Check if input is actually valid:
    else if((arr[1] != '\0' || arr[0] > '9' || arr[0] < '0')){
      printf("Invalid input!\n");
    }else{
      //Input is valid
      // Prepare user input for dumping into function
      // -48 to get correct offset for int from ascii
      print_digit(arr[0]-'0');
    }
  }
  return 0;
}

void print_digit(int digit) {

    printf("\n %c \n",  (digits[digit][0]) ? '-' : ' ');
    printf("%c %c\n", (digits[digit][1]) ? '|' : ' ', (digits[digit][2]) ? '|' : ' ');
    printf(" %c \n",  (digits[digit][3]) ? '-' : ' ');
    printf("%c %c\n", (digits[digit][4]) ? '|' : ' ', (digits[digit][5]) ? '|' : ' ');
    printf(" %c \n",  (digits[digit][6]) ? '-' : ' ');
}
#include <stdio.h>

int main(){
  char c = 'a';
  short s = 10;
  int i = 100;
  long l = 1000;
  float f = 1.1;
  double d = 2.2;
  int arr[11] = {1,2,3,4,5,6,7,8,9,10};
  char str[6] = "Hello";
  printf("%c, %d, %d, %ld, %f, %lf, %d, %s\n",c,s,i,l,f,d,arr[4],str);

  return 0;
}
