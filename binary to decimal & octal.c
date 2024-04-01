
#include <stdio.h>
int binary_to_decimal(int num) {
 int rem, base = 1, decimal_number = 0;
 while( num > 0) {
 rem = num % 10;
 if((rem == 0) || (rem == 1)) {
 decimal_number = decimal_number + rem * base;
 num = num / 10 ;
 base = base * 2;
 } else {
 return -1;
 }
 }
 return decimal_number;
}

int decimal_to_octal(int number) {
 int octal_number = 0, rem, base = 1;

 while(number > 0) {
 rem = number % 8;
 octal_number = octal_number + rem * base;
 base = base * 10;
 number = number / 8;
 }
 return octal_number;
}

void main() {
 int binary_numer, decimal_number, octal_number;

 printf("Enter a binary number: ");
 scanf("%d", &binary_numer);


 decimal_number = binary_to_decimal(binary_numer);
 if(decimal_number == -1) {
 printf("\nInvalid binary number. Try again.");
 return;
 }
 printf("The Decimal number is: %d", decimal_number);

 octal_number = decimal_to_octal(decimal_number);
 printf("\nThe octal number is: %d", octal_number);

}
