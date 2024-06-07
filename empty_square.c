/* this program prints an empty square made of asterisks */

/* Psuedo
 *
 * input size
 *
 * set row to size
 *
 * while row greater than or equal to one
 *    set counter to one
 *
 *    if row is equal to row (first row)
 *       while counter is less than or equal to size
 *          print *
 *          increment counter
 *    if row is equal to 1 (last row)
 *       while counter is less than or equal to size
 *          print *
 *          increment counter
 *    else
 *       while counter is less than or equal to row - 2
 *          if counter is equal to one 
 *          print " "  
 *
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



