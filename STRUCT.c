#include<stdio.h>

typedef struct {
	
	int edad;
	float salario;

} t_persona1;

typedef struct {
	
	int edad;
	float salario;

} t_persona2;

int main() {
	
	t_persona1 a; //a la carpeta le asignamos un nuevo nombre a la carpeta en mi caso a
	
	a.edad = 23; //no hace falta decir el tipo de variable porque ya esta mencionado en la carpeta, para acceder a cada componente de la carpeta se tiene que poner el nuevo_nombre.variable
	a.salario= 2500.89;
	
	printf("\nLa edad del primer trabajador es: %d\n", a.edad);
	printf("El salario del primer trabajador es: %.2f\n\n", a.salario);
	
	t_persona2 b;
	
	b.edad = 20;
	b.salario= 2000.69;
	
	printf("\nLa edad del primer trabajador es: %d\n", b.edad);
	printf("El salario del primer trabajador es: %.2f\n\n", b.salario);
	
	//de esta forma puedes tener más de una variable con el mismo nombre o para oprtimizar espacio y no tener 50 variables en el main
}
