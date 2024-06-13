/* This program prints a checkerboard pattern */

/* the rules:
 *
 * only three printf() statements:
 *
 * printf("* ");
 *
 * printf(" ");
 *
 * and printf("\n");
 *
 * may be used once each >:)
 */

#include <stdio.h>

int main(){
   
   int rows = 8, count;

   while (rows > 0){
      count = 1;

      while (count <= 8){
         printf("* ");
	 ++count;
      }

      printf("\n");

      if (rows % 2 == 0){
      printf(" ");
      }
      
      --rows;
   }
   return 0;
}


