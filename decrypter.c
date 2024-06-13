/* this program decrypts the data (basically reverses encrypter.c) */


/* Psuedo
 *
 *  set count to 0
 *
 *  input encrypted data
 * 
 *  swap numbers back into original position
 *
 *  while encrypted data is greater than 0
 *     set digit to encrypted data mod 10
 *     subtract 7 from digit
 *     if digit is less than or equal to 0
 *        multiply digit by -1
 *        set digit to 10 mod digit
 *     
 *     increment count
 *     encrypted data divided by 10
 *
 *     if count is 1
 *        set second digit to digit
 *     if count is 2
 *        set first digit to digit
 *     if count is 3
 *        set fourth digit to digit
 *     if count is 4
 *        set third digit to digit
 *     
 *     print decrypted number
 */


#include <stdio.h>

int main(){

   int encrypted_data, count = 0, digit, first_digit, second_digit, third_digit, fourth_digit;

   printf("Enter encrypted data: ");
   scanf("%d", &encrypted_data);


   while (encrypted_data > 0){
      digit = encrypted_data % 10;
      digit -= 7;
      if (digit < 0){
         digit *= -1;
	 digit = 10 % digit;
      }
      if (digit == 0){
         digit == 3;
      }
      ++count;
      encrypted_data /= 10;

      if (count == 1)
         second_digit = digit;
      if (count == 2)
	 first_digit = digit;
      if (count == 3)
	 fourth_digit = digit;
      if (count == 4)
	 third_digit = digit;
   }

      printf("Decrypted integer: %d%d%d%d", first_digit, second_digit, third_digit, fourth_digit);

   return 0;
}
