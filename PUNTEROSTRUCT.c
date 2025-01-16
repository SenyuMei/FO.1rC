#include<stdio.h>

typedef struct {

	int x, y;
	
} t_puntero;

int main() {

	t_puntero a;
	
	a.x = 3;
	a.y = 2;

	printf("\nPuntero x = %d\nPuntero y = %d\n\n", a.x, a.y);
	//(normal) Ahora crearemos un puntero hacia un struct
	
	t_puntero *pPuntero;
	
	pPuntero = &a;
	
	pPuntero -> x = 5;
	pPuntero -> y = 10;
	
	printf("Puntero x = %d\nPuntero y = %d\n\n", a.x, a.y);
	printf("pPuntero->x = %d\npPuntero->y = %d\n\n", pPuntero->x, pPuntero->y);

}
