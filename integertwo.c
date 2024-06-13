/* this program tries to infinitely prints the multiples of 2 */

/* why doesn't it work as expected? */

#include <stdio.h>

int main(){
   
   int integer = 2;
   
   while (integer >= 2){   
      printf("%d\n", integer);
      integer *= 2;
   }
   return 0;
}
