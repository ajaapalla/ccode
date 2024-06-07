/* see what this program prints out */

#include <stdio.h>

int main(){

   int row = 10, column;

   while (row >= 1){
      column = 1;

      while (column <= 10){
         printf("%s", row % 2 ? "<" : ">");
	 ++column;
      }

      --row;
      printf("\n");
   }

   return 0;
}


/* Note that 0 means FALSE and ANY NONZERO means TRUE */
