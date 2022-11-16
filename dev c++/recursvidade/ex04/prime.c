#include <stdio.h>
#include <stdlib.h>
#include "prime.h"

int prime(int x, int y, int result){
	if(x==y){
		result++;
		return result;
	}else if((x % y ) == 0){
		result++;
	}
	
	return prime(x,y+1, result);
}

