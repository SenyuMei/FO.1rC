#include<stdio.h>

int* añadirNumeros( int* num1, int* num2, int* suma ) {

	*suma = *num1 + *num2;
	
	return suma;
}

int main() {

	int numero1 = 30;
	int numero2 = 90;
	int sum;
	
	int* resultado = añadirNumeros( &numero1, &numero2, &sum );
	
	printf("\nLa suma es %d\n\n", *resultado);
	
}
