#include<stdio.h>

void imprimirEdad( int edad ) {

	printf("Tienes %d años\n\n", edad );

}

void imprimirEdadPuntero( int *pEdad ) { // * solo hace falta cuando es declarado o cuando se quiere usar en un scan o printf

	printf("Tienes %d años\n\n", *pEdad );

}


int main() {

 	int edad = 18; // el int tiene como nombre edad y esta edad es equivalente al numero 18, detras del codigo existen direcciones que son donde se almacena la informacion

	printf("\nEdad esta en la direccion: (%p) <- esta almacenada en esa direccion", &edad);
	printf("\nValor de 'edad' es: %d\n\n", edad);
 
 // los punteros sirven para almacenar estas direcciones en variables diferentes y para que se puedan almcenar correctamente tienen que ser del mismo tipo, es decir si es un float el pointer creado tiene que ser float tambien
 
	 int *pEdad = &edad; // ahora el puntero i edad contienen el mismo valor
 	 //para crear punteros escoges el tipo de valor ( int *pNombre = &nombre)
  	 printf("\nDireccion de 'edad' es: %p\n", &edad);
	 printf("Valor de p*Edad: (%p)\n\n", pEdad);
	 
	 printf("Confirmarmos que el puntero esta en una direccion diferente pero la direccion del valor contenido en el puntero es el mismo\nEn pocas palabras, el Puntero de edad tiene una direccion diferente pero el valor es el mismo que la variable inicial\n");
 
	 printf("\nValor de edad: %d", edad);
	 printf("\nValor almacenado en pEdad %d\n\n", *pEdad);
	 
	 imprimirEdad( edad );
	 imprimirEdadPuntero( pEdad );

}
