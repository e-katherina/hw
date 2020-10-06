#include <stdio.h> 

void main() { 
	int N, k; 
	printf ( "\nВведите целое число ");
	k=0;
	scanf ( "%d", &N ); 
	for ( int i = 2; i*i <= N; i ++ ) 
		if ( N%i == 0 )
		k++;
	if (k>0)
		printf ( "Число %d - составное\n", N ); 
	else printf ( "Число %d - простое\n", N ); 
}
