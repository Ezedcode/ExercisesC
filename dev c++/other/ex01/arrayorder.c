#include<stdio.h>
#include<stdlib.h>

main(){
	 	int i, aux, a;
        int array[]={2,6,3,5,9,7,8,8,20,17,14,19,32,30};
        
		/*
        for(i=0; i < array.length; i++){
            System.out.println(array[i]);
        }*/
		for(a=0; a < 14; a++){
			for(i=0; i < 13; i++){
           	 	if(array[i] > array[i+1]){
                	aux = array[i];
                	array[i] = array[i+1];
                	array[i+1] = aux;
            	}
            	
            }
        }
        
        
        for(i=0; i < 14; i++){
        	printf("%d ", array[i]);
		}
}
