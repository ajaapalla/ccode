/* this program tests the increment operator */

#include <stdio.h>

int main(){

	int result = 5;
	int x = 5;

	result = ++x + x;

	printf("%d", result);

	return 0;

}
