/* Calculates salesperson's weekly earnings */

#include <stdio.h>

int main(){

   float sales, salary;

   printf("\nEnter sales in dollars (-1 to end): ");
   scanf("%f", &sales);
   
   while (sales != -1){
      salary = 200 + 0.09 * sales;
     
      printf("Salary is: $%.2f\n", salary);  

      printf("\nEnter sales in dollars (-1 to end): ");
      scanf("%f", &sales);
   }
   return 0;
}


