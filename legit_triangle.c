/* this program reads 3 non-zero floats and determines if they could represent sides of a triangle */

/* this makes use of the triangle inequality theorem
 *
 *  the sum of any two sides must be greater than the third
 */

#include <stdio.h>

int main(){

   float side_one, side_two, side_three;

   int tally = 0;

   printf("Enter three lengths: ");
   scanf("%f%f%f", &side_one, &side_two, &side_three);

   while (side_one + side_two + side_three <= 0){
   printf("Please enter three non-zero or non-negative lengths: ");
   scanf("%f%f%f", &side_one, &side_two, &side_three);
   }

   if (side_one + side_two > side_three){
      ++tally;
   }
   if (side_two + side_three > side_one){
      ++tally;
   }
   if (side_three + side_one > side_two){
      ++tally;
   }

   if (tally == 3){
      printf("Legit triangle");
   }
   else
      printf("Not a triangle");

  return 0;
}
