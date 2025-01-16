#include<stdio.h>

int main() {

	printf("\nHola Mundo\n\n"); // esto es un string es un vector formado por caracteres
	
	char str[] = "Hola mundo"; // dentro de [] puede ir el limite de caracteres
	
	printf("Imprimir con STRING\n");
	printf("%s\n\n", str); // para imrpimir un string es necesario usar %s
	
	printf("String por un usuario\nEscribe una secuencia de caracteres de maximo 20 letras: ");
	
	/* char sec[20]; 
	
	scanf("%s%*c", sec); // el scanf de un string no va con & para denotar su valor
	
	printf("%s\n\n", sec);
	
	printf("Como te daras cuenta solo te a codigo la primera palabra del string y eso es porque no puedes usar un scanf convencional porque el scanf lo lee hasta que se encuentra un espacio, para que te lea todo tienes que usar fgets con el formato [ fgets(nombre, sizeof(nombre), stdin); ]\n"); */
	
	char fras[20]; 
	
	fgets(fras, sizeof(fras), stdin);
	
	printf("%s\n\n", fras);
	
	printf("\nPara acceder a un caracter de un string es como si lo tomaras como un vector\n");
	
	char acc[] = "Hacer";
	
	printf("Letra 1 %c ", acc[0]);
	printf("\n");
	printf("Letra 2 %c ", acc[1]);
	printf("\n");
	printf("Letra 3 %c ", acc[2]);
	printf("\n");
	printf("Letra 4 %c ", acc[3]);
	printf("\n");
	printf("Letra 5 %c ", acc[4]);
	printf("\n\n");
	
	printf("\nPara cambiar una letra es igual con los vectore, en este caso dejar la columna 1 vacia\n");
	
	acc[0] = '\0';
	
	printf("Letra 1 %c ", acc[0]);
	printf("\n");
	printf("Letra 2 %c ", acc[1]);
	printf("\n");
	printf("Letra 3 %c ", acc[2]);
	printf("\n");
	printf("Letra 4 %c ", acc[3]);
	printf("\n");
	printf("Letra 5 %c ", acc[4]);
	printf("\n\n");
}
	
