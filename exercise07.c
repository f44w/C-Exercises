#include <stdio.h>

void print_array(int* ptr, int len);

void print_2d_array(char* ptr, int ylen, int xlen);

int main(){
	
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// Delcares pointer pointing to arr[0];
	// Don't need to declare int *pointer = arr
	// as our array variable is basically just a
	// pointer that we pretned is an array
	print_array(arr, 10);
//This part tests print_2d_array, uncomment it when print_array is working

	char arr2[4][5] = {
		{'A', 'B', 'C', 'D', 'E'},
		{'F', 'G', 'H', 'I', 'J'},
		{'K', 'L', 'M', 'N', 'O'},
		{'P', 'Q', 'R', 'S', 'T'},
	};
	// *arr2 points to 'A' in first array
	// second array is continuous in memory;
	// 'E' + 1 = 'F' in memory
	printf("\n");
	print_2d_array(*arr2, 4, 5);
	printf("\n");
	return 0;
}

void print_array(int *ptr, int len){
  for(int i=0; i<len; i++){
    // print whats at our pointer location + i for offset:
    if(i == len-1){
      printf("%d ", *(ptr+i));
    }
    else{
      printf("%d, ", *(ptr+i));
    }
  }
}

void print_2d_array(char* ptr, int ylen, int xlen){
  for(int i=0; i<ylen; i++){
    for(int j=0; j<xlen; j++){
      // i * xlen - give us correct Y value
      // +j - gives the correct value through the array we are in
      if(j == xlen-1){
	printf("%c ",*(ptr+(i*xlen+j)));
      }else{
	 printf("%c, ",*(ptr+(i*xlen+j)));
      }
    }
    printf("\n");
  }
}

