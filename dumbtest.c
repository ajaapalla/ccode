/* counter-controlled loop: analyze exam results and prints if tuition should be raised *rolls eyes* */


#include <stdio.h>

int main(){

	int result, student,  pass_count, fail_count;

	pass_count = 0;
	fail_count = 0;
	student = 1;
	
	while (student <= 10){
	   printf("Enter 1 for pass, 2 for fail: ");
	   scanf("%d", &result);
	
      	   if (result != 1){
	      if (result != 2)
	         --student;
	   }

	   if (result == 1)
	      pass_count = pass_count + 1;
	   
	   if (result == 2)
	      fail_count = fail_count + 1;

	   student = student + 1;
	}

	
       	printf("Summary:\n%d passed, %d failed\n", pass_count, fail_count);       

	if (pass_count > 8)
	   printf("Raise tution >:D");

	return 0;
}
