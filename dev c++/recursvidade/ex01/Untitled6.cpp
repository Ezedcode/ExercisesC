#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

float S(float x){
	float result;
	
	if(x==0){
		return 1;
	}else{
		result = x + S(1 + x^2)/x; 
	}
	return result;
}

main(){
	float number, result;
	
	printf("Enter a number to calculate the factorial: ");
	scanf("%d",&number);
	
	result = S(number);
	
	printf("\nThe result is: ");
	printf("\nS%d = %d",number,result);
	return 0;
}
