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
  char c;
  while(1){
    printf("Enter a single digit (0-9): \n");
    scanf("%c", &c);

    // Check for quit condition:
    if(c == 'q'){
      return 0;
    }
    // Check if input is actually valid:
    else if(c > '9' || c < '0'){
      printf("Invalid input!\n");
    }else{
      //Input is valid
      // Prepare user input for dumping into function
      // -48 to get correct offset for int from ascii
      print_digit(c-'0');
    }
  }
  return 0;
}

void print_digit(int digit){

    printf("\n %c \n",  (digits[digit][0]) ? '-' : ' ');
    printf("%c %c\n", (digits[digit][1]) ? '|' : ' ', (digits[digit][2]) ? '|' : ' ');
    printf(" %c \n",  (digits[digit][3]) ? '-' : ' ');
    printf("%c %c\n", (digits[digit][4]) ? '|' : ' ', (digits[digit][5]) ? '|' : ' ');
    printf(" %c \n",  (digits[digit][6]) ? '-' : ' ');
}
