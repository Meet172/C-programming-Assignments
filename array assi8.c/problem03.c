// to sum of all elements in the array.
#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the number:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]); //to input all elements.
	}
	printf("\nthe array elements is:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]); //to display all elements.
	}
	//to sum of all element.
	int sum=0;
	
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	printf("\n\nThe sum of all elements is: %d",sum);
}