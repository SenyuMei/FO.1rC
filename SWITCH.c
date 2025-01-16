#include<stdio.h>

int main() {
	int num;
	
	printf("\nIntroduce un número del 1-7: ");
	scanf("%d%*c", &num);
	
	switch (num) {
	
	case 1:
	printf("\nLunes\n");
	break;
	case 2:
	printf("\nMartes\n");
	break;
	case 3:
	printf("\nMiercoles\n");
	break;
	case 4:
	printf("\nJueves\n");
	break;
	case 5:
	printf("\nViernes\n");
	break;
	case 6:
	printf("\nSabado\n");
	break;
	case 7:
	break;
	printf("\nDomingo\n");
	default:
	printf("\nVariable no valida\n");
	
	}
	
	
}
