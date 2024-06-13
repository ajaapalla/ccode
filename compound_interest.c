/* this program computes compound interest based on the following */

/* a = p(1 + r)^n
 *
 * p	is the principle amount invested
 * r	is the annual interest rate (APY)
 * n	is the number of years
 * a	is the amount on deposit at the end of the nth year
 *
 *
 * How would you use for if you already pre-defined the control variable */


/* NOTE any math.h libraries must be run with -lm */

#include <stdio.h>
#include <math.h>


int main(){

   double principle, rate, amount;

   int years, annual;

   printf("Enter principle amount: ");
   scanf("%lf", &principle);

   printf("Enter interest rate: ");
   scanf("%lf", &rate);

   printf("Enter years for investment: ");
   scanf("%d", &annual);
   
   printf("%4s%21s\n", "Year", "Amount on deposit");

   for (years = 1; years <= annual; years++) {
      amount = principle * pow(1.0 + rate, years);
      printf("%4d%21.2f\n", years, amount);
   }

   return 0;
}
      
