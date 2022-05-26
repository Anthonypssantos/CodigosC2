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
	
	
	for (i=0;i<1;i++){
		
		printf("Ultimo: [%i]\nDecimo: [%i]\nNono: [%i]\nOitavo: [%i]\nSetimo: [%i]\nSexto: [%i]\nQuinto: [%i]\nQuarto: [%i]\nTerceiro: [%i]\nSegundo: [%i]\nPrimeiro: [%i]\n", vetor[10], vetor[9], vetor[8], vetor[7], vetor[6], vetor[5], vetor[4], vetor[3], vetor[2], vetor[1], vetor[0]);
		
	}
	
}
