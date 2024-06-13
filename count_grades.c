/* Counting letter grades using the switch structure */

#include <stdio.h>

int main(){

   int grade;
   int a_count = 0, b_count = 0, c_count = 0, d_count = 0, f_count = 0;

   printf("Enter the letter grades.\n");
   printf("Enter the EOF character to end input.\n");

   while ( ( grade = getchar() ) != EOF){
   
      switch (grade){
         
	 case 'A': case 'a':
	    ++a_count;
	    break;

	 case 'B': case 'b':
	    ++b_count;
	    break;

	 case 'C': case 'c':
	    ++c_count;
	    break;

	 case 'D': case 'd':
	    ++d_count;
	    break;

	 case 'F': case 'f':
	    ++f_count;
	    break;

	 case '\n': case ' ':
	    break;

	 default:
	    printf("Incorrect letter grade entered.");
	    printf(" Enter a new grade.\n");
	    break;
      }
   }

   printf("\nTotals for each letter grade are:\n");
   printf("A: %d\n", a_count);
   printf("B: %d\n", b_count);
   printf("C: %d\n", c_count);
   printf("D: %d\n", d_count);
   printf("F: %d\n", f_count);

   return 0;
}
