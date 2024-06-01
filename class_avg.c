/* sentinel-controlled class average program */

#include <stdio.h>

int main(){

	/* declaration */
	int total, counter, grade;
	float average;
	
	total = 0;
	counter = 0;

	/* repeat entering grades */
	printf("Enter Grade, else -1 to stop: ");
	scanf("%d", &grade);

	while (grade != -1){
	   total = total + grade;
	   counter = counter + 1;
		
	   printf("Enter Grade, else -1 to stop: ");
	   scanf("%d", &grade);
 	}

	if (counter != 0){
	   average = total / counter;
	   printf("Average is %.2f", average);
	}
	else
	   printf("No grades were entered");

	return 0;
}

