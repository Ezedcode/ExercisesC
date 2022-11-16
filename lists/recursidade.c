#include <stdio.h>
#include <stdlib.h>
#include "recursidade.h"

int result1 = 0, num = 1;

void inteiropositivo(float number);
int inteiropositivoodd(float number);

void ex_1(int number, int count){
	int result;
	
	result = number * count;
	printf("%d * %d = %d\n", number, count, result);
	
	if(count == 12){
		
		return;
	}
	ex_1(number, count + 1);
}

int ex_2(int number){

	result1 += number;
	
	if(number == 1){
		
		printf("%d = %d", number, result1);
		return result1;
	}
	
	printf("%d + ", number);
	return ex_2(number - 1);
}

void ex_3(int number){
	if(number == 0){
		return;
	}else if((number % 2) == 0){
		printf("%d\n", number);
	}
	ex_3(number-1);
}

void inteiropositivo(float number){
	int aux = (int)number;
	if((aux != number) || (number <= 0) || ((aux % 2) != 0)){
		printf("\nEnter pair posite and entire number: ");
		scanf("%f", &number);
		inteiropositivo(number);
	}else{
		ex_3(aux);
	}
}

void ex_4(int i, int j, int k){
	
	if(i == j){
		printf("%d ", i);
		return;
	}
	
	if(i > j)
		return;
	
	printf("%d ", i);
	ex_4(i + k, j, k);
}

void ex_5(int number, int pow){
	
	if(pow == 1){
		printf("the result of power: %d", number);
		return;
	}
	ex_5(number*number, pow - 1);
}

int ex_6(int number){
	int num = 1;
	 	
	if(number == 0){
		return 1;
	}else if((number % 2) != 0){
		return number * ex_6(number - 1);
	}
	ex_6(number - 1);	
}

int inteiropositivoodd(float number){
	int aux = (int)number;
	if((aux != number) || (number <= 0) || ((aux % 2) == 0)){
		printf("\nEnter odd posite and entire number: ");
		scanf("%f", &number);
		inteiropositivoodd(number);
	}else{
		return ex_6(aux);
	}
}


int ex_7(int number){
	
	if((number == 0)||(number == 1)||(number == 2)||(number == 3)){
		return 0;
	}
	
	if (number == 4){
		return 1;
	}
	
	return ex_7(number - 4) + ex_7(number - 3) + ex_7(number - 2) + ex_7(number - 1) ;
}

int ex_10(int vetor[], int i){
	printf("\n%d\n", vetor[i]);
	if(i == 0){
		return;
	}
	return ex_10(vetor, i-1);
}



