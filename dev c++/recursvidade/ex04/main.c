#include <stdio.h>
#include <stdlib.h>
#include "prime.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	printf("Enter a number to determinate if is a prime number: ");
	scanf("%d",&number);
	
	if(prime(number, 1,0) == 2){
		printf("\nThe number is prime!");
	}else{
		printf("\nThis number isn't prime!");
	}
	
	return 0;
}
