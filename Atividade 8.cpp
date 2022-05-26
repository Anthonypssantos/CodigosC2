#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int m[2][10], i=0, j=0;
		
	printf("Insira numeros\n");
	
	for (i=0;i<2;i++){
		for (j=0;j<10;j++){
			
			scanf("%i", &m[i][j]);
	
		}	
	}
	
	for (i=0;i<1;i++){
		for (j=0;j<1;j++){
			
			printf("Coluna 1: [%i] | [%i]\n", m[0][0], m[1][0]);
			printf("Coluna 2: [%i] | [%i]\n", m[0][1], m[1][1]);
			printf("Coluna 3: [%i] | [%i]\n", m[0][2], m[1][2]);
			printf("Coluna 4: [%i] | [%i]\n", m[0][3], m[1][3]);
			printf("Coluna 5: [%i] | [%i]\n", m[0][4], m[1][4]);
			printf("Coluna 6: [%i] | [%i]\n", m[0][5], m[1][5]);
			printf("Coluna 7: [%i] | [%i]\n", m[0][6], m[1][6]);
			printf("Coluna 8: [%i] | [%i]\n", m[0][7], m[1][7]);
			printf("Coluna 9: [%i] | [%i]\n", m[0][8], m[1][8]);
			printf("Coluna 10: [%i] | [%i]\n", m[0][9], m[1][9]);
					
		}
	}
}
