#include<stdio.h>
 
int main()
{
	int A[100],key,i,n,pos;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
 	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
 	printf("Enter the key\n");
	scanf("%d",&key);
 	pos=linearSearch(A,n,key);
	if(pos==-1)
		printf("%d is not present \n",key);
	else
		printf("%d is present at location %d\n",key,pos+1);
	return 0;
} 
 
int linearSearch(int *A,int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (*(A+i)==key)
			return i;
   	}
 	return -1;
}
