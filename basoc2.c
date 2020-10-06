#include <stdio.h> 

void main() { 
	int N, k; 
	k=0;
	printf ( "\nВведите целое число ");
	scanf ( "%d", &N ); 
	for ( int i = 2; i*i <= N; i ++ ) 
		if ( N%i == 0 )
		k++;
	if (k>0)
		printf ( "Число %d - составное\n", N ); 
	else printf ( "Число %d - простое\n", N ); 
}
