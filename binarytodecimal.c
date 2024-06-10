/* program reads in a binary number and prints the decimal equivalent */

/* Psuedocode
 *
 * input binary number
 * 
 * set positional value to 1
 * set decimal number to 0
 *
 * while binary number greater than zero
 *    set digit equal to binary number mod 2
 *    decimal number += digit * positional_value
 * 
 *    positional value *= 2
 *    divide binary number by 10
 *
 * print decimal number
 *
 */

#include <stdio.h>

int main(){

   int binary_number, decimal_number = 0, digit, positional_value = 1;

   printf("Enter binary number: ");
   scanf("%d", &binary_number);

   while (binary_number > 0){
      digit = binary_number % 2;
      decimal_number += digit * positional_value;

      positional_value *= 2;
      binary_number /= 10;
   }

   printf("%d", decimal_number);

   return 0;
}
