/* Program prints diameter, circumference, and area from a circle radius */

#include <stdio.h>

int main(){

   float radius, pi = 3.14159;

   printf("Enter radius: ");
   scanf("%f", &radius);

   printf("Diameter is: %.2f\n", radius * 2);
   printf("Circumference is: %.2f\n", 2 * pi * radius);
   printf("Area is: %.2f\n", pi * radius * radius);

   return 0;
}
