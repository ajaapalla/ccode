/* this program reads a four-digit integer and replaces each digit by adding seven to each digit itself then taking the modulus 10 of that digit. Then swap the first with the third digit and second with the fourth */


#include <stdio.h>

int main(){

   int data, count = 0, digit, new_digit, first_new_digit, second_new_digit, third_new_digit, fourth_new_digit;

   printf("Enter data: ");
   scanf("%d", &data);


   while (data > 0){
      digit = data % 10;
      new_digit = (digit + 7) % 10;
      ++count;
      data /= 10;

      if (count == 1)
         fourth_new_digit = new_digit;
      if (count == 2)
	 third_new_digit = new_digit;
      if (count == 3)
	 second_new_digit = new_digit;
      if (count == 4)
	 first_new_digit = new_digit;
   }
      printf("Encrypted integer: %d%d%d%d", third_new_digit, fourth_new_digit, first_new_digit, second_new_digit);

   return 0;
}
