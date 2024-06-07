/* this program prints a filled square made of asterisks */

/* Psuedo
 *
 * input size
 *
 * set row to size
 *
 * while row greater than or equal to one
 *    set counter to one
 *
 *    while counter is less than or equal to size
 *       print *
 *       increment counter
 *   
 *    print new space
 *
 *    decrement row
 *
 */


#include <stdio.h>

int main(){

   int size, row, count;
	
   printf("Enter size: ");
   scanf("%d", &size);
   
   row = size;

   while (row >= 1){
      count = 1;  
      
      while (count <= size){
         printf("*");
	 ++count;
      }

      printf("\n");
      --row;
      
}
   return 0;

}





