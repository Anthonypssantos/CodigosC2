#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	double m[3][3], i=0, j=0;
	
	
	m[0][0] = 1.0;
	m[1][0] = 2.0;
	m[2][0] = 3.0;
	m[0][1] = 4.0;
	m[1][1] = 5.0;
	m[2][1] = 6.0;
	m[0][2] = 7.0;
	m[1][2] = 8.0;
	m[2][2] = 9.0;
	
	
	printf("Coluna 1 = ");
			
			printf("%0.f | %0.f | %0.f", m[0][0], m[1][0], m[2][0]);
			
	printf("\nColuna 2 = ");
		
			printf("%0.f | %0.f | %0.f", m[0][1], m[1][1], m[2][1]);
					
	printf("\nColuna 3 = ");
			
			printf("%0.f | %0.f | %0.f", m[0][2], m[1][2], m[2][2]);
				
}
