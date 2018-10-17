#include <stdio.h>

void swap(int *x,int *y);
int pivot(int m,int n);
void quicksort(int a[],int m,int n);
void display(int a[],int n);
 
void main()
{
    	int a[100],n,i;
 	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
   	for(i = 0; i < n; i++ )
 		scanf("%d",&a[i]);
  	quicksort(a,0,n-1);
 	printf("The list after sorting\n");
 	display(a,n);
}
 
void swap(int *x,int *y)
{
	int temp;
    	temp=*x;
    	*x=*y;
    	*y=temp;
}
 
int pivot(int m,int n)
{
    	return((m+n)/2);
}
 
void quicksort(int a[],int m,int n)
{
   	int key,i,j,k;
   	if(m<n)
    	{
        	k=pivot(m,n);
        	swap(&a[m],&a[k]);
		key=a[m];
        	i=m+1;
        	j=n;
       		while(i<=j)
        	{
            		while((i<=n) && (a[i]<=key))
                		i++;
           		while((j>=m) && (a[j]>key))
                		j--;
            		if(i<j)
                		swap(&a[i],&a[j]);
        	}
        	swap(&a[m],&a[j]);
 		quicksort(a,m,j-1);	
        	quicksort(a,j+1,n);
    	}
}

void display(int a[],int n)
{
  	int i;
    	for(i=0; i<n; i++)
        	printf("%d\t",a[i]);
	printf("\n");
}
