#include <stdio.h>
#include <stdlib.h>
#include "table.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	printf ("Enter a number to print a table: ");
	scanf("%d",&number);
	solveTable(number);
	return 0;
}
