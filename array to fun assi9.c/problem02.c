// find min & max in given array.
#include<stdio.h>
void storele(int*,int);
void display(int*,int);
void minmax(int*,int,int*,int*);
void main()
{
	int arr[5];
	printf("Enter the elements:\n");
	storele(arr,5);
	printf("\nThe elements is:\n");
	display(arr,5);
	//to find min & max we call.
	int max=arr[0]; 
	int min=arr[0];
	minmax(arr,5,&max,&min);
	printf("\n\nThe max element in the array is: %d\n",max);
	printf("The min element in the array is: %d",min);
	
}
	
void storele(int* ptr,int size)
{
	for(int i=0;i<size;i++)
    {
    	scanf("%d",&ptr[i]);
	}
}

void display(int* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
}

void minmax(int* ptr,int size,int* max,int* min)
{
	for(int i=0;i<size;i++)
	{
		if(ptr[i]<*min)  // yaha elements compare honge.
		{
			*min=ptr[i]; //yaha min update ho rha hai elements check ke liye
		}
		if(ptr[i]>*max)
		{
			*max=ptr[i]; //yaha max update ho rha hai elements check ke liye
		}
	}

	
}