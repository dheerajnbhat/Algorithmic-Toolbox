#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("GCD of(%d,%d) is %d \n",a,b,gcd(a,b));
	return 0;
}

int gcd(int a,int b)
{
	int q,r;
	while(b>0)
	{
		q=a/b;
		r=a-q*b;
		a=b;
		b=r;
	}
	return a;
}
