/* this program computest the value of e^x */

/* e^x = 1 + x/1! + x^2/2! + x^3/3! + ... */




#include <stdio.h>

int main(){

   float constant = 1, n = 1, x, power;
   
   int terms, counter = 1, number = 1;

   printf("Enter x for e^x: ");
   scanf("%f", &x);

   printf("Enter number of terms: ");
   scanf("%d", &terms);

   power = x;
   

   while (terms > 0){
      n = 1;

      while (number > 0){
         n *= number--;

      }
      
      number = ++counter;
      

      if (number > 2){
         power *= x; 
      }

     
      constant += power / n;
      
      
      --terms;
  }

   printf("%f\n", constant);

   return 0;
}
