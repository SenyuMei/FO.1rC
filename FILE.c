#include<stdio.h>

int main() {

	FILE *pF = fopen("nombre.txt", "w"); // segundo argumento puede ser w: escbribir, a: añadir, r: leer 
	
	fprintf(pF, "Hola mundoo");
	
	fclose(pF);
	
	/* if(remove("nombre.txt") == 0) {
		printf("El fichero de texto se a eliminado\n");
	} else {
		printf("El fichero no se a eliminado\n");
	} para borrar ficheros que se hayan sobre escrito con w cuando (w) tienen que poner la ubicacion de donde screara el fichero de texto */
	
	FILE *nP = fopen("fichero.txt", "r");
	
	if( nP != NULL ) {
		printf("\nSe a abierto satisfactoraiamente\n\n");
	} else {
		printf("\nNo se a podido abrir tu fichero\n\n");
	}
	// el usuario en cuestion añadira el directorio para acceder a ese fichero y dependiendo de si se puede abrir o no dara una respuesta o otra
}
