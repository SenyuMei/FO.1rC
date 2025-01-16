#include<stdio.h>

void saludar() { //crear funcion void nombre() y a continuacion { texto del cuerpo }
	printf("Buenos Días\n");
}

void suma( int num1, int num2 ) {
	int suma;
	suma = num1 + num2;
	printf("La suma de %d + %d = %d\n\n", num1, num2, suma);
}
	

int main() {
	
	printf("\n");
	saludar(); //llamar a la funcion 
	saludar();
	saludar();
	printf("Despues de la funcion\n\n");
	suma( 2, 8 ); //asignar valores al llamar la funcion

}
