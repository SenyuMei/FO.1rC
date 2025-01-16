#include<stdio.h>

int main() {

	int fin, ini = 1;
	
	printf("\nIntroduce un digitos, este digito sera cuantas veces quieres que se repita el texto: ");
	scanf("%d", &fin);
	printf("\n");
	
	while ( ini <= fin ) {
		printf("¡Hola! Soy texto. \n");
		printf("Repeticiones -> %d\n", ini);
		++ini;
	}
	printf("\n");
	printf("Ahora con DO-WHILE\n");
	printf("\n");
	
	
	int ini2, fin2 = 10;
	
	printf("\nIntroduce un número del 1 al 10 donde 10 es el tope: ");
	scanf("%d", &ini2);
	printf("\n");
	
	do {
		printf("%d\n", ini2);
		++ini2;	
	} while ( ini2 <= fin2 );
	printf("\n");
	/*la diferencia reside en que el do while aunque la condicion sea falsa se ejecuta minimo una vez mientras que si es solo un while no se ejecutara*/
}
