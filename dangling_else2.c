/* Another dangling else problem: what does the following output? */


#include <stdio.h>

int main(){

	int x = 5, y = 7;

	if (y == 8){
	if (x == 5)
	printf("@@@@@\n");
	}
	else{
	printf("#####\n");
	printf("$$$$$\n");
	printf("&&&&&\n");
	}
	/* what would you do if you want:
	 * @@@@@
	 * $$$$$
	 * &&&&&
	 */

	/* how about:
	 * @@@@@
	 */

	/* how about:
	 * @@@@@
	 * &&&&&
	 */

	/* how about:
	 * #####
	 * $$$$$
	 * &&&&&
	 */

	/* extra! how about nothing:
	*/

	return 0;
}

