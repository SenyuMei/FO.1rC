#include<stdio.h>

int main() {
	
	int i, sum = 0;
	
	printf("\n");
	for ( i = 1 ; i <= 100 ; i++ ) {
		sum += i;
		printf("%d + %d = %d\n", i, sum, sum);
	}
	printf("\nLa suma del 1 al 100 es de: %d\n\n", sum);
}
	
