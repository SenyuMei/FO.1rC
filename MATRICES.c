#include<stdio.h>

int main() {
	
	printf("\nMultidimensional Array o Array de Array o n vectores\n\n");
	
	int vec[3][2] = { {34,45} , {41,51} , {1,2} };
	
	printf("int vec[3][2] { {34,45} , {41,51} , {1,2} }; | un Array de un Array tiene esta forma en la que el primer[indica el numero de vectores o dicho de otra manera para ser representado graficamente Fila 1, fila 2, fila 3 hasta filas n depende del lo que quieras, el segundo [] indica el muero de valores que tendra el vector en mi caso 2 (x, y) pero puede ser x y z t j i depende del n valor que quieras que tenga\n\n");
	printf("\tC1 C2\n");
	printf("FILA 1: %d %d\nFILA 2: %d %d\nFILA 3: %d  %d\n\n", vec[0][0], vec[0][1], vec[1][0], vec[1][1], vec[2][0], vec[2][1]);
	
	printf("\nSimilarmente con un vector normal tambien puedes cambiar un valor de un vector manualmente\n");
	
	vec[2][1] = 99;
	
	printf("%d  %d\n\nAhora el termino del vector 3 termino 2 ahora es 99 y no 2\n\n", vec[2][0], vec[2][1]);
	
	//mediante un for
	
	int x, y;
	
	for( x = 0 ; x < 3 ; ++x ) { // el outter loop se ejecuta hasta que x = 2
		for( y = 0 ; y < 2  ; ++y ) { // el inner loop se ejecuta hasta que y = 1
			printf("%d  ", vec[x][y]);
		}
	}
	printf("\n\n");
}
