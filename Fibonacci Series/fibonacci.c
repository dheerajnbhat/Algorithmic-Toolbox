#include<stdio.h>

int main()
{
	int i,n;
	int p,q;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Fibonacci Series is \n");
	for(i=0;i<=n;i++)
		printf("%d\t",fib(i));
	printf("\n");
	printf("last digit of the fibonacci term is %d \n",(fib(n-1)+fib(n-2))%10);
	printf("Enter Fp and Fq\n");
	scanf("%d%d",&p,&q);
	for(i=p;i<=q;i++)
		printf("%d\t",fib(i));
	printf("\n");
	return 0;
}

int fib(int n)
{
	if(n<=1)
		return n;
	return fib(n-1)+fib(n-2);
}
