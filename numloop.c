/* uses looping to print numbers 1 - 10 on the same line */

#include <stdio.h>

int main(){

	int number = 1;

	while (number <= 10){
	   printf("%d   ", number);
	   ++number;
	}

	return 0;
}
