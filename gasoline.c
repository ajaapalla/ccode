/* C program that inputs miles driven and gas used -> prints miles/gal */

#include <stdio.h>

int main(){

	float gallons;
	int miles;
	int count = 0;
	float mpg = 0, total_mpg = 0, total_mi = 0 , total_gal = 0;

	printf("Enter gallons used (-1 to end): ");
	scanf("%f", &gallons);	

	while (gallons != -1){
	   total_gal += gallons;   
		
	   ++count;

	   printf("Enter miles: ");
	   scanf("%d", &miles);
	   total_mi += miles;

	   mpg = miles / gallons;

	   printf("Miles / gallon for this tank was %f\n", mpg);

	   total_mpg += mpg;

	   printf("Enter gallons used (-1 to end): ");
	   scanf("%f", &gallons);
	}

	printf("\nThe average miles/gal was %f\n", total_mpg / count);
	printf("The overall total miles/gal was %f\n", total_mi / total_gal);
	return 0;
}

