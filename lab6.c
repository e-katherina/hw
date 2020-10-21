#include<stdio.h>

int main() {
	int n, m;
	printf("Введите количество строк массива: ");
	scanf("%d", &n);
	printf ("Введите количество столбцов массива: ");
	scanf("%d", &m);
	
	int i, j;
	int n_row = 0;
	int max = 1 << sizeof(int)*8 - 1;
	int a[n][m];
	printf ("Введите элементы массива:\n");
	for (i = 0; i < n; i++) {
	        printf ("%d строка: ", i+1);	
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m-1; j++)
			if (a[i][j] > a[i][j+1] /*&& j > 0*/)
				break;
			
				if (j == m-1) {
					n_row++;
					if (max < a[i][j])
						max = a[i][j];
				}
	}
	if (n_row > 0)
		printf ("\nmax = %d\n", max);
	else 
		printf ("В данном массиве нет упорядоченных строк");
	
}


