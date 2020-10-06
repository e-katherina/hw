#include<stdio.h>  
int main()    
{    
	int n, sum=0, m, count=0;    
	printf("Enter a number:");    
	scanf("%d",&n);    
	while(n>0)    
		{    
		m=n%10;    
		sum+=m;    
		n=n/10;
		count++;
		}    
	printf ("The number of digits is %d\n", count);
	printf("The sum is %d\n",sum);    
	return 0;  
}   
