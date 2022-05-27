#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){

	int vetor[10], menor=999999, maior=1, i=0, p=0, h=0;
	
	
	printf("Insire numeros\n");
	for (i=0;i<10;i++){
		
	scanf("%i", &vetor[i]);
	
	if (vetor[i] <= menor){
		
		menor = vetor[i];
		
		}
		
	if (vetor[i] >= maior){		

		maior = vetor[i];

	}
	
	}
	
	
	system("cls");
	
	for (i=0;i<10;i++){
		
		printf("Numeros inseridos: [%i]\n", vetor[i]);
		
	}
	
	printf("\nMenor numero: {%i}\n", menor);
	printf("Maior numero: {%i}\n", maior);	
	
}
