#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int m[10][10], r[10][10], i=0, j=0, h=0, f=0, q=0, l=0;
		
	printf("Insire numeros inteiros na matriz 1\n");
	
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){	
			scanf("%i\n", &m[i][j]);
							
							
		}	
	}
	
	for (h = 0 ; h < 10 ; h++){
		for (f = 0 ; f < 10 ; f++){
	
			scanf("%i\n", &r[h][f]);
	
		}
	}
	
	
	for (q=0;q<10;q++){
		for (l=0;l<10;l++){
			
			if (m[i][j] == r[h][f]){					
			
				printf("Sao simetricas\n");						
	
			}else{					
			
				printf("Nao simetricas\n");		
		
			}			
		}	
	}
	
	//amortecedor de enter
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	
}
