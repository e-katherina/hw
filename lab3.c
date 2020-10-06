#include<stdio.h>
#define n 10

int sort(int arr[], int m);

int main() {
	int i, j;
	int a[n], b[n], c[2*n];
	//ввод элементов массива
	printf("enter array a:");
	for (i=0; i<n; i++) 
		scanf("%d", &a[i]);
	//сортируем элементы массива а
	sort(a, n);

	printf("enter array b:");
	for (i=0; i<n; i++) 
		scanf("%d", &b[i]);
	sort(b, n);

	printf("\nsorted array a: ");
	for (i=0; i<n; i++) {
		c[i]=a[i];
		printf("%d ", a[i]);
	}
	printf("\nsorted array b: ");
	for (i=0, j=n; i<n; i++, j++) {
		printf("%d ", b[i]);
		c[j]=b[i];
	}
	//ввод элементов массивов а и b в массив c
	sort(c, 2*n);
	printf("\n \narray c: ");
	for (i=0; i<2*n; i++)
		printf("%d ", c[i]);
		printf("\n");
}

//функция сортировки введенных символов по возрастанию
int sort (int arr[], int m) {
	int gap, i, j;
	//определение расстояния между сравниваемыми числами
	for (gap = m/2; gap > 0; gap /= 2)
		//перечисление элементов на шаге
		for (i = gap; i < m; i++)
			//сравниваем числа
			for (j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap) {
				//меняем элементы массива местами с помощью операции xor
				arr[j]=arr[j]^arr[j+gap];
				arr[j+gap]=arr[j+gap]^arr[j];
				arr[j]=arr[j]^arr[j+gap];
				}

	return arr[m];
}
       		
