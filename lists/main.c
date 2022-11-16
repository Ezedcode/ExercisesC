#include <stdio.h>
#include <stdlib.h>
#include "recursidade.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu();

int main(int argc, char *argv[]) {
	int number;
	float aux, aux2;
	int vetor[5] = {1,2,3,4,5}; 
	
	for(;;){
		switch(menu()){
			case 1:
				printf("\n\nEnter the number you want to print the table: ");
				scanf("%d", &number);
				ex_1(number, 1);
				break;
			case 2:
				printf("\n\nEnter the number to calculate the addiction of the number till 1: ");
				scanf("%d", &number);
				ex_2(number);
				break;
			case 3:
				printf("\nEnter pair posite and entire number: ");
				scanf("%f", &aux);
				number = (int)aux;
				if((aux != number) || (aux <= 0) || ((number % 2) != 0)){
					inteiropositivo(aux);
				}else{
					printf("\nNumeros pares de 0 ate %d\n", (int)aux);
					ex_3(aux);
				}
				break;
			case 4:
				printf("\nDigite o intervalo da sequencia inicio: ");
				scanf("%d", &number);
				printf("End of the sequency: ");
				scanf("%f", &aux);
				printf("Enter the jump of the sequency encrease: ");
				scanf("%f", &aux2);
				ex_4(number, (int)aux, (int)aux2);
				break;
			case 5:
				printf("\nEnter the number you wanna calculate the power: ");
				scanf("%d", &number);
				printf("Enter the index of power: ");
				scanf("%f", &aux);
				ex_5(number, aux);
				break;
			case 6:
				printf("\nEnter the number you wanna calculate the the double factorial: ");
				scanf("%f", &aux);
				number = (int)aux;
				
				if((aux != number) || (aux <= 0) || ((number % 2) == 0)){
					number = inteiropositivoodd(aux);
				}else{
					number = ex_6(number);
				}
				printf("\nthe result is %d", number);
				
				break;
			case 7:
				printf("\nEnter the number to get the N-term of the tetranacci sequency: ");
				scanf("%d", &number);
				
				printf("The %d term of the sequency is: %d", number, ex_7(number));
				break;
			case 10:
					printf("Inverter ordem de vetor\n");
					ex_10(vetor, 5-1);
					break;
			case 11:
				exit(0);
				break;
			default:
				printf("\nInvalid option!");
				break;
		}
		printf("\nEnter any  number to return at main menu\n");
		getch();
		system("cls");
	}
	
	return 0;
}

int menu(){
	int option;
	
	printf("\n----------------------------\n");
	printf("  MENU LISTA RECURSIVIDADE ");
	printf("\n----------------------------\n");
	printf("      1.Exercicio 1 \n");
	printf("      2.Exercicio 2 \n");
	printf("      3.Exercicio 3 \n");
	printf("      4.Exercicio 4 \n");
	printf("      5.Exercicio 5 \n");
	printf("      6.Exercicio 6 \n");
	printf("      7.Exercicio 7 \n");
	printf("      10.Exercicio 10 \n");
	printf("      11.Exit \n");
	printf("\nOption: ");
	scanf("%d", &option);
	
	return option;
}
