#include <stdio.h>
#include <stdlib.h>
#include "sfactorial.h"

int factorial(int x){
	int result;
	
	if(x==0){
		return 1;
	}else{
		result = x * factorial(x-1);
	}
	return result;
}

int sFactorial(int x){
	int result;
	
	if(x==0){
		return 1;
	}else{
		result = factorial(x)*sFactorial(x-1);
	}
	
	return result;
}
 

