#include<stdio.h>
#include<stdlib.h>
int prime(int x);
main(){
	int number;
	printf ("Enter a number: ");
	scanf("%d",&number);
	if((prime(number))==0){
		printf("\nprimo");
	}else{
		printf("\nnao e primo");
	}
	return 0;
}


int prime(int x){
	int result, a=x+1;
	
	result = x % prime(a-1);
	
	if (result == 2){
		return 0;
	}else{
		return 1;
	}
}
