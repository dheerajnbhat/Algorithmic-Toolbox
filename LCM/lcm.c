#include<stdio.h>

int main()
{
	int a,b,lcm,i;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);	
	i=gcd(a,b);		/*Use gcd algorithm*/
	lcm=(a*b)/i;	
	printf("LCM of (%d,%d) is %d \n",a,b,lcm);
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
