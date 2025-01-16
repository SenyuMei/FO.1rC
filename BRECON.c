#include<stdio.h>

int main() {

	while(1) {
		int num;
		printf("\nIntroduce on numero: ");
		scanf("%d", &num);
		
		if ( num <= 0 ) {
			printf("\n");
			break;
		}
		if (( num % 2 ) != 0 ) {
			continue;
		}
		printf("%d\n", num);
	}
}
