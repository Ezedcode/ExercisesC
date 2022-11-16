#include <stdio.h>
#include <stdlib.h>

float s(int x){	
	if(x==1){
		return 2;
	}
	return (s(1 + x^2)/x) + (s(x-1));
}

main(){
	int number;
	float  result;
	
	printf("Enter a number to calculate the factorial: ");
	scanf("%d",&number);
	
	result = s(number);
	
	printf("\nThe result is: ");
	printf("\nS%d = %d",number,result);
	return 0;
}
