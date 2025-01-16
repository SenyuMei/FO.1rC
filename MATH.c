#include<stdio.h>
#include<math.h>

int main() {

	int raiz, expo, nente, res2;
	float res1;
	
	printf("\nIntroduce dos numeros: ");
	scanf("%d%d", &raiz, &expo);
	printf("\n");
	printf("Introduce el exponente para el segundo numero introducido: ");
	scanf("%d", &nente);
	printf("\n");
	
	res1 =  sqrt( raiz ); // cbrt para raiz cubica
	res2 = pow( expo, nente );
	printf("El primer numero a la raiz es %.2f y el segundo al exponente introducido %d\n\n", res1, res2);

}
