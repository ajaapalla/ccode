/* This program reads in five-digit number and determines if it is a palindrome */

#include <stdio.h>

int main(){
   
   int number, first_digit, second_digit, third_digit, fourth_digit, fifth_digit;
  
   printf("Enter number: ");
   scanf("%d", &number);

   
   first_digit = number % 10;
   printf("%d", first_digit);// = digit;
   number /= 10;
  
   second_digit = number % 10;
   printf("%d", second_digit);
   number /= 10;

   third_digit = number % 10;
   printf("%d", third_digit);
   number /= 10;

   fourth_digit = number % 10;
   printf("%d", fourth_digit);
   number /= 10;

   fifth_digit = number % 10;
   printf("%d", fifth_digit);
   number /= 10;

   if (first_digit == fifth_digit){
      if (second_digit == fourth_digit){
         printf("\nPalindrome!\n");
	}
   }
   else
      printf("\nNot a palindrome\n");

   return 0;
}
