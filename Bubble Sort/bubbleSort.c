#include <stdio.h>
 
void swap(int *x,int *y);
void bubleSort(int a[],int n);
void display(int a[],int n);
 
void main()
{
	int a[100],n,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)	
		scanf("%d",&a[i]);
 	bubleSort(a,n);
 	printf("Sorted array is\n");
    	display(a,n);
}
 
void swap(int *x,int *y)
{
    	int temp;
    	temp=*x;
    	*x=*y;
    	*y=temp;
}
 
void bubleSort(int a[],int n)
{
    	int i,j;
   	for(i=0;i<n;i++)
    	{
        	for(j=0;j<n-i;j++)
        	{
                	if(a[j]>a[j+1])
                    	swap(&a[j],&a[j+1]);
            	}
 
        }
}

void display(int a[],int n)
{
	int i;
    	for(i=1;i<=n;i++)
        	printf("%d\t",a[i]);
     	printf("\n");
}
