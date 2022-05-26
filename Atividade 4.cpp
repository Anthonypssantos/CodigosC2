#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int matriz[3][3], i=0, j=0;
	
	printf("Insire numeros inteiros\n\n");
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			
			scanf("%i", &matriz[i][j]);
			
			
		}
	
	}
	
	printf("Coluna 1 = ");
	for (i=0;i<1;i++){
		for (j=0;j<3;j++){
			
			printf("%i | ", matriz[0][j]);
			
			
		}
	
	}
	printf("\nColuna 2 = ");
	for (i=0;i<1;i++){
		for (j=0;j<3;j++){
			
			printf("%i | ", matriz[1][j]);
			
			
		}
	
	}
	printf("\nColuna 3 = ");
	for (i=0;i<1;i++){
		for (j=0;j<3;j++){
			
			printf("%i | ", matriz[2][j]);
			
			
		}
	
	}
		
}
