/* this program tests how fast c compiles */

#include <stdio.h>

int main(){

   int count = 1;

   while (count <= 3000000){
      ++count;
      if (count % 1000000 == 0)
         printf("%d\n", count);
   }

   return 0;
}
