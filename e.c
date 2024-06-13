/* this program estimates the value of constant e by using the following */

/* e = 1 + 1/(1!) + 1/(2!) + 1/(3!) + ... */

/* Psuedo
 *
 * input terms
 * 
 * while terms is greater than 0
 *    set n to 1
 *    while number is greater than 0
 *       set n to n multiplied by number
 *       decrement number
 *       increment counter
 *
 *    add 1 / n to constant
 *
 *    set number to increment of counter
 *    
 *    decrement terms
 *
 *
 *    print constant
 *
 *
 *
 *
 *
 *
 *
 */


#include <stdio.h>

int main(){

   float constant = 1, n = 1;
   
   int terms, counter = 1, number = 1;

   printf("Enter number of terms: ");
   scanf("%d", &terms);

   while (terms > 0){
      n = 1;

      while (number > 0){
         n *= number--;;
      }
      

      constant += 1 / n;
      
      number = ++counter;
      --terms;
  }

   printf("%f\n", constant);

   return 0;
}
