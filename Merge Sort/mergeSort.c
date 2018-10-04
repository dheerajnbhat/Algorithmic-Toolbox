#include<stdio.h>

void merge(int A[],int low,int mid,int high) 
{ 
	int i,j,k; 
	int n1=(mid-low)+1; 
	int n2=(high-mid); 
	int L[n1],R[n2]; 
	for(i=0;i<n1;i++) 
	        L[i]=A[low+i]; 
	for(j=0;j<n2;j++) 
	        R[j]=A[mid+1+j]; 
	i=0; 
	j=0;  
	k=low;  
	while(i<n1&&j<n2) 
	{ 
        	if(L[i]<=R[j]) 
        	{ 
        		A[k]=L[i]; 
        		i++; 
        	} 
        	else
        	{ 
        		A[k]=R[j]; 
        		j++; 
        	} 
        	k++; 
    	} 
  	while(i<n1) 
  	{ 
        	A[k]=L[i]; 
        	i++; 
        	k++; 
    	} 
	while(j<n2) 
    	{ 
        	A[k]=R[j]; 
        	j++; 
        	k++; 
    	} 
} 
  
void mergeSort(int A[],int low,int high) 
{ 
	int mid;
	if(low<high) 
	{ 
	        mid=low+(high-low)/2; 
	        mergeSort(A,low,mid); 
	        mergeSort(A,mid+1,high);   
       	merge(A,low,mid,high); 
    	} 
} 

void printArray(int A[],int n) 
{ 
	int i; 
	for (i=0;i<n;i++) 
	        printf("%d\t",A[i]); 
	printf("\n"); 
} 
  
int main() 
{ 
	int A[100],i,n; 
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	mergeSort(A,0,n-1); 
	printf("\nSorted array is \n"); 
	printArray(A,n); 
	return 0; 
}
