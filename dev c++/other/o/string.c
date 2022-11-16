#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct Dados{
	char *nome;
	int idade;
	float height;
};

main(){
	struct Dados *dados = malloc(20);
	char *p = malloc(20);
	printf("Digite o nome: ");
	scanf("%s",&p);
	
	strcpy(dados->nome, *p);
	printf("Digite a idade: ");
	scanf("%d",&dados->idade);
	printf("Digite a altura: ");
	scanf("%f",&dados->height);
	
	printf("\n%s\n", dados->nome);
	printf("%d\n", dados->idade);
	printf("%f\n", dados->height);
	
	getch();
	return 0;
}
