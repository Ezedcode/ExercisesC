#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

int S(int x){
	int result;
	
	if(x==0){
		return 1;
	}else{
		result = x + S(1 + x^2)/x; 
	}
	return result;
}
/*
void Expression(int x){
	int i;
	printf("\n!%d = ",x);
	for (i=x; i >= 1; i--){
		if(i==1){
			printf("%d", i);
		}else{
			printf("%dx",i);
		}
	}
}*/
