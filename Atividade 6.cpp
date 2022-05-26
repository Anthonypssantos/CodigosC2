#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int d[2][2], i=0, j=0;
	
	printf("Insira numeros\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		
		scanf("%i", &d[i][j]);
		
		}	
		
	}
	
	d[0][0] += d[1][1];
	d[1][0] += d[0][1];
	
	printf("Soma 1: [%i]\nSoma 2: [%i]", d[0][0], d[1][0]);
				
}
