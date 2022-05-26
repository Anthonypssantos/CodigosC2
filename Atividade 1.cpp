#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int vetor[12], i=0;
	
	printf("Insira 12 numeros\n\n");
	
	for (i=0;i<12;i++){
		
		printf("Informe os numeros\n");
		scanf("%i", &vetor[i]);
			
	}
	
	for (i=0;i<12;i++){
		
		printf("Numeros adicionados: [%i]\n", vetor[i]);
		
	}
	
}
