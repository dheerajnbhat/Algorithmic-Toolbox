#include <stdio.h>
 
int main()
{
	int n,i,a[100];
	printf("Enter the array size\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertSort(a,n);	
	printf("Sorted array is\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}

int insertSort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	return 0;
}
