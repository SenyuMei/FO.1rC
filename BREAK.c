#include<stdio.h>

int main() {
	
	while(1) { // 1 indica que es verdadero siempre (true) 
		int num;
		printf("\nIntroduce un numero: ");
		scanf("%d", &num);
		
		if ( num < 0 ) {
			break;
		}
		printf("%d\n", num);
	}
}
