/* Determines if credit limit is exceeded on a charge account */

/* Note that totals and balance are NOT tracked */

#include <stdio.h>

int main(){

	int account;
	float balance, charges, credits, cred_lim, new_bal;

	printf("\nEnter account number (-1 to end): ");
	scanf("%d", &account);

	while (account != -1){
	      printf("Enter beginning balance: ");
	      scanf("%f", &balance);
	      
	      printf("Enter total charges: ");
	      scanf("%f", &charges);
	      
	      printf("Enter total credits: ");
	      scanf("%f", &credits);

	      printf("Enter credit limit: ");
	      scanf("%f", &cred_lim);

	      new_bal = balance + charges - credits;

	      if (new_bal > cred_lim){
	         printf("Account: %d\n", account);
		 printf("Credit Limit: %.2f\n", cred_lim);
		 printf("Balance: %.2f\n", new_bal);
		 printf("Credit Limit Exceeded.\n");
	      }

	      printf("\nEnter account number (-1 to end): ");
	      scanf("%d", &account);
	}

	return 0;
}
	      
