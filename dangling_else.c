/* dangling else problem: what does the following code output? */

#include <stdio.h>

int main(){
   
  // int x = 9, y = 11;
 int x = 11, y = 9;

/* part a */

   /*if (x < 10)
   if (y > 10)
   printf("*****\n");
   else
   printf("#####\n");
   printf("$$$$$\n");
*/

/* part b */

   if (x < 10){
   if (y > 10)
   printf("*****\n");
   }
   else{
   printf("#####\n");
   printf("$$$$$\n");
   }
   return 0;
}

