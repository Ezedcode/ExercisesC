#include <stdio.h>
#include <stdlib.h>
#include "serieS.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number, result;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	printf("\nThe result is: \n");
	printf("%c",intN(number));
	
	return 0;
}
