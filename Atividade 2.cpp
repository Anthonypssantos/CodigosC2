#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int vetor[11], i=0;
	
	printf("Insira 11 numeros\n\n");
	
	for (i=0;i<11;i++){
		
		printf("Informe os numeros\n");
		scanf("%i", &vetor[i]);
			
	}
	
	
	system("cls");
	
	printf("++++++++++Saida de dados++++++++++\n\n");
	for (i=11;i>0;i--){
		
		printf("Invercao: [%i]\n", vetor[i]);	
	}
	
	printf("\n\nOutra tabela em ordem\n\n");
	
	for (i=0;i<11;i++){
		
		printf("Ordem inicial: [%i]\n", vetor[i]);	
	}
	
	

}
