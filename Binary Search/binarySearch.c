#include<stdio.h>

int binarySearch(int A[],int low,int high,int key) 
{ 
	int mid;	
	if(high>=low) 
   	{ 
        	mid=low+(high-low)/2; 
  		if(A[mid]==key)  					   
			return mid; 
  		if(A[mid]>key)      				       
			return binarySearch(A,low,mid-1,key); 
		return binarySearch(A,mid+1,high,key); 			  
	} 
  	return -1; 							  
} 
  
int main() 
{ 
	int n,i,A[30],key,pos;  
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Enter the key\n");	
	scanf("%d",&key);
	pos=binarySearch(A,0,n-1,key); 
   	if(pos==-1)
		printf("Element is not present in array\n"); 
	else
		printf("Element is present at location %d\n",pos+1); 
   	return 0; 
}
