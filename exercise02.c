#include <stdio.h>

int main(){
	int age = 0;
	char name[20] = "";
	char food[20] = "";
	
	printf("Please enter your name: \n");
	scanf("%19s", name);
	
	printf("Please enter your age: \n");
	scanf("%d", &age);
	
	printf("Please enter your favourite food: \n");
	scanf("%19s", food);
	
	
	printf("Hi, %s! You're %d, and your favourite food is %s\n", name, age, food);


	return 0;
}