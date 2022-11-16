#include <stdio.h>
#include <stdlib.h>
#include "table.h"
/*a representacao da informacao pode feita de modo a que os dados sejam usados dde forma mais eficiente

existem diferentes tipos de estruturas de daodos aplicados a diferente problemas 

as estruturas podem ser linear ou nao lineares  


*/
int solveTable(int x){
	int result, a=0;
	if(a == 12){
		result = x*12;
		printf ("%d x %d = %d", x, solveTable(a + 1), result);
		return result;
	}else{
		result = x*solveTable(a + 1);
		printf ("%d x %d = %d\n", x, solveTable(a + 1), result);
	}
	return result;
}
