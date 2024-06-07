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
 *       print new space
 *    if row is equal to 1 (last row)
 *       while counter is less than or equal to size
 *          print *
 *          increment counter
 *       print new space
 *    else
 *       while counter is less than or equal to size - 2
 *          set counter to one
 *          print *
 *             while counter is less than or equal to size - 2
 *                print " "
 *                increment counter
 *          print * and new space  
 *
 *
 *   
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
     
      if (row == size){
         while (count <= size){
	    printf("*");
	    ++count;
	 }
	 printf("\n");
      }

/* May want to fix extra space under input of size 1 */	

      if (row == 1){
	 while (count <= size){
	    printf("*");
	    ++count;
	 }
	 printf("\n");
      }

      else{
	 count = 1;
	 while (count <= size - 2){
	    printf("*");
	    while (count <= size - 2){
	       printf(" ");
	       ++count;
	    }
	    printf("*\n");
         }
      }
	
      --row;
      
}
   return 0;

}



