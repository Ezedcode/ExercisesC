#include <stdio.h>
#include <stdlib.h>

main(){
	int i = 0;
	
	do{
		printf("%d ", i);
		i++;
	}while(i == 0);
	
	while(i == 0){
		printf("%d", i);
	}
	
	return 1; 
}
