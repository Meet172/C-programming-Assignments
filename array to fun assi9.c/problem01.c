// store & display array by using function.
#include<stdio.h>
void storele(int*,int);
void display(int*,int);
void main()
{
	int arr[5];
	printf("Enter the elements:\n");
	storele(arr,5);
	printf("\nThe elements is:\n");
	display(arr,5);
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