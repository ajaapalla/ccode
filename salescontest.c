/* inputs a series of 10 numbers, and determines and prints the largest of the numbers. */

/* Pseudocode */

/* input a number
 *
 * set counter equal to zero
 * set largest to number
 *
 * while counter is less than or equal to ten
 *    if number is > than largest
 *       set largest to number
 *
 *    input a number
 *
 *    increment counter
 *    
 * 
 * print largest number 
 */


#include <stdio.h>

int main(){

   int number, counter = 2, largest;

   printf("\nEnter number: ");
   scanf("%d", &number);

   largest = number;

   while (counter <= 10){
      if (number > largest){
         largest = number;
      }

      printf("Enter number: ");
      scanf("%d", &number);

      ++counter;
   }

   printf("Largest number is %d\n", largest);

   return 0;
}
