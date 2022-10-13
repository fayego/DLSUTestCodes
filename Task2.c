#include <stdio.h>
 
int main (void) {
 
	int number;
	int ones;
	int tens;
	int hundreds;
	int firstpal;
	int secondpal;
 
	printf("Input a 3-digit number: ");
	scanf("%d",&number);
 
 
    hundreds = number / 100 % 10;
    tens = number / 10 % 10;
    ones = number % 10;
    firstpal = (hundreds)+(tens*10)+(ones*100)+(ones*1000)+(tens*10000)+(hundreds*100000);
    secondpal = (ones)+(tens*10)+(hundreds*100)+(hundreds*1000)+(tens*10000)+(ones*100000);
 
    printf("First palindrome is %d",firstpal);
    printf("\nSecond palindrome is %d",secondpal);
 
	return 0;
}