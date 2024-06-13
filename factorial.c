/* this program computes and prints the factorial of a given nonegative integer */

#include <stdio.h>

int main(){

   int number, n = 1;

   printf("Enter nonegative integer: ");
   scanf("%d", &number);
   

   while (number > 0){ 
      n *= number--;
   }

   printf("%d\n", n);

   return 0;
}
