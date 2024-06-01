/* conditional operator example */


#include <stdio.h>

int main(){

	int grade;
	printf("Enter grade: ");
	scanf("%d\n", &grade);

	grade >= 60 ? printf("Passed\n") : printf("Failed\n");

//	printf("%s\n", grade >= 60 ? "Passed" : "Failed");

	return 0;

}

/* funky user interface takes input of another character to print result */
