//reverse the array.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the elements:\n");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("\nThe elements is:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nAfter reverse the array elements:\n");
	for(int i=4;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}