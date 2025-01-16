#include<stdio.h>

int main() {
	
	int i;
	
	printf("\n");
	for ( i = 1 ; i <= 5 ; i++ ) {
	
		if ( i == 3 ) {
			continue; //se salta la iteracion cuando i == 3 entonces no la imprime
		}
		
	printf("%d\n", i);
	}
	print("\n");
}
