#include<stdio.h>

#define MES 31

typedef struct {
	
	int temam, tempm;
	
} ttemperatura;

int main() {

	int i, k;	
	
	int temp6am[MES]={5,3,6,4,4,4,3,1,1,1,1,4,5,5,2,2,2,2,2,2,3,1,1,1,1,2,2,3,3,4,4};
	int temp6pm[MES]={11,11,12,12,6,4,6,6,10,10,9,9,9,10,10,9,9,8,11,11,12,12,13,11,13,17,12,12,13,14,10};
	
	ttemperatura t[MES];
	
	for( i = 0 ; i <= MES ; i++ ) {
		t[i].temam = temp6am[i];
		t[i].tempm = temp6pm[i];
	}
	
	for( k = 17 ; k > 0 ; k-- ) {
		if( k > 9 ) {
		printf("%d", k);
		} else {
			printf(" %d", k);
		}
		for( i = 0 ; i <= MES ; i++ ) {
			if( t[i].temam == k ) {
				printf("-");
			} else if ( t[i].tempm >= k ) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for ( i = 0 ; i < 35 ; i++ ) {
	printf("_");
	}
	printf("\n");
}
