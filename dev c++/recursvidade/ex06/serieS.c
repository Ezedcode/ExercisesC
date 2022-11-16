#include <stdlib.h>
#include <stdio.h>
#include "serieS.h"

char intN(int x){
	char *str1=NUll, *str2=NULL;
	if(x==0){
		return 'a';
	if(x==1){
		return 'b';
	
	return intN(x-1) + intN(x-2);
}

