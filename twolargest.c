/* inputs a series of 10 numbers, and determines and prints the two largest of the numbers. */

/* Pseudocode */

/* input a number
 *
 * set counter equal to zero
 *
 * set laregest  equal to number
 *
 * while counter is less than or equal to ten
 *    if number is greater than largest
 *       set second_largest to largest
 *       set largest to number
 *
 *    input a number
 *
 *    increment counter
 *    
 * 
 * print largest number 
 */


/* NOTE: Counter is set to 2 because 2 PROMPTS ARE DISPLAYED BEFORE FIRST WHILE LOOP COMPLETES */

#include <stdio.h>

int main(){

   int current_number, counter = 2, largest, second_largest;

   printf("\nEnter number: ");
   scanf("%d", &current_number);

   largest = current_number;

   while (counter <= 10){
      printf("Enter number: ");
      scanf("%d", &current_number);

      if (current_number >= largest){
	 second_largest = largest;
	 largest = current_number;
      }

      else{
         if (current_number >= second_largest)
	    second_largest = current_number; 
      }
      ++counter;
   }

   printf("Largest number is %d\nSecond Largest number is %d\n", largest, second_largest);

   return 0;
}
