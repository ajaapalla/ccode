/* finds the first power of a number larger than a given number */

#include <stdio.h>

int main(){

	int product, power, number;

	printf("Enter base: ");
	scanf("%d", &product);

	printf("Enter power: ");
	scanf("%d", &power);

	printf("Enter number: ");
	scanf("%d", &number);

	
	int count = 1;

	while (product <= number){
	   product = product * power;
	   count += 1;
	}

	printf("power: %d", count);
	return 0;
}	

