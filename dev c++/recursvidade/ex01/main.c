#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float number, result;
	
	printf("Enter a number to calculate the factorial: ");
	scanf("%d",&number);
	
	result = S(number);
	
	printf("\nThe result is: ");
	factorialExpression(number);
	printf("\nS%d = %d",number,result);
	return 0;
}
