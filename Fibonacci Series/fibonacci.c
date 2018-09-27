#include<stdio.h>

int main()
{
	int i,j,n,p,q;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter Fp and Fq\n");
	scanf("%d%d",&p,&q);	
	printf("Fibonacci Series is \n");
	for(i=0;i<=n;i++)
		printf("%d\t",fib(i));
	printf("\n");	
	printf("The square of fibonacci series is \n");	
	for(j=0;j<=n;j++)
		printf("%d\t",fib(j)*fib(j));
	printf("\n");	
	printf("Fibonacci series from Fp to Fq is \n");	
	for(i=p;i<=q;i++)
		printf("%d\t",fib(i));
	printf("\n");
	printf("Last digit of the fibonacci term is %d \n",(fib(n-1)+fib(n-2))%10);	
	return 0;
}

int fib(int n)
{
	if(n<=1)
		return n;
	return fib(n-1)+fib(n-2);
}

