/* program takes an integer and prints how many sevens there are */

#include <stdio.h>

int main(){
   
   int number, sevens = 0, digit;

   printf("Enter a number: ");
   scanf("%d", &number);
  
   while (number > 0){
      digit = number % 10;
      if (digit == 7){
         ++sevens;
      }
      number /= 10;
   }
   
   if (sevens == 1)
   printf("There is %d seven", sevens);
   else
      printf("There are %d sevens", sevens);


   return 0;
}
