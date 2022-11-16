#include <stdio.h>
#include <stdlib.h>
#include "sfactorial.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number, result;
	
	printf("Enter a number to calculate the super factorial: ");
	scanf("%d",&number);
	
	result = sFactorial(number);
	
	printf("\nThe result is: ");
	printf("\nSf(%d) = %d", number, result);
	return 0;
}
