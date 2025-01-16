#include<stdio.h>

int añadirNumeros( int num1, int num2 ); /* {
	int suma = num1 + num2;
	return suma;
	printf("Despues de RETURN"); // cualquier cosa despues del return no se ejecutac 
} */

int main() {
	
	int resultado = añadirNumeros( 10, 2 );
	printf("\nResultado = %d\n\n", resultado);
	
}

	
int añadirNumeros( int num1, int num2 ) {
	int suma = num1 + num2;
	return suma;
	printf("Despues de RETURN"); // los returns pueden ir antes o despues de llamar a la funcion	
} 
