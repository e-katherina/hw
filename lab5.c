#include<stdio.h>


#define MAXLINE 10

int main() {
	char* s[MAXLINE], find[MAXLINE]; 
	int i, j, n=2, k=0, inside=0, c, b;
	printf("Enter a word you want to find: "); 
	for (i = 0; i<MAXLINE && (c = getchar()) !=  '\n' && c != ' ' ; i++)
		scanf("%s", &find[i]);
	for (i=0; i<MAXLINE && find[i] != '\0'; i++)
		printf("%s", &find[i]);
	printf("Enter the string: ");
	for (i = 0; i<MAXLINE && (c = getchar()) != '\n'; i++) 
		scanf("%s", &s[i]);
	printf("сработало");/*
	//перебираем строку для условного разделения на слова
	for (i = 0; i < MAXLINE; i++) {
		if (s[i] != ' ' && s[i] != '\0')
			inside=1;
		//ищем слово в строке
		while (inside) 
			for (j = 0; j<=n; j++) 
				if (s[i] == find [j] && (s[i+n] == ' ' || s[i+n] == '\0'))
					k++;
		
	}
	if (k == 0)
	       	printf("The word doesn't appear in the string :(");
	else if (k == n) 
		printf("The word appears in the string only one time"); 
	else 
	        printf ("The word appears in the string %d times", k/n);*/
}
