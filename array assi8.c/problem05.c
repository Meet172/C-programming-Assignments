//print alternate array elements only.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the number:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nthe array elements is:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nThe alternate array is:\n ");
	for(int i=0;i<5;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}
	