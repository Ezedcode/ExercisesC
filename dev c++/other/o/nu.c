#include <stdio.h>
#include <stdlib.h>

int number();

struct l{
	int num;
};

main(){
	
	struct l b, c;
	int number1;
	
	b.num = 1;
	c.num = 2;
	
	number1 = number();
	scanf("%d", &number1);
	
	number1 += b.num + c.num;
	
	printf("%d", number1);
	
	return 0;
}

int number(){
	printf("the is number ");
	
	return 10;
}
