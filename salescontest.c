/* inputs a series of 10 numbers, and determines and prints the largest of the numberes. */

/* Pseudocode */

/* input a number one at a time
 *
 * set counter equal to zero
 *
 * while counter is less than or equal to ten
 *    input a new number
 *
 *    if new number is greater than number
 *       set largest to new number
 *    else
 *       largest is set to number
 * 
 * print largest number 
 */


#include <stdio.h>

int main(){

   int number, new_number, counter = 2, largest;

   printf("\nEnter number: ");
   scanf("%d", &number);

   while (counter <= 10){
      printf("Enter number: ");
      scanf("%d", &new_number);
      if (new_number > number){
         largest = new_number;
      }
      else
         largest = number;

      ++counter;
   }

   printf("Largest number is %d\n", largest);

   return 0;
}
