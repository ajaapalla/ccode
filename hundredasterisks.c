/* this program prints 10 asterisks on 10 lines */

#include <stdio.h>

/* Pseudo
 *
 *  set count to 1
 *
 *  while count is less or equal to 100
 *     print *
 *     if count mod 10 == 0
 *        print new line
 *
 *     increment count
 */



int main(){
   
   int count = 1;

   while (count <= 100){
      printf("*");
      if (count % 10 == 0){
         printf("\n");
      }
   ++count;
   }   

   return 0;
}
