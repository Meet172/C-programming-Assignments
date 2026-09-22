// To find min & max element in given array. 
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
	//To find min & max.
	//pehle array ko hi min & max manlo.
	int max=arr[0]; // yaha arr[0] se hi assign karna bohot imp hai.
	int min=arr[0];
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]<min)  // yaha elements compare honge.
		{
			min=arr[i]; //yaha min update ho rha hai elements check ke liye
		}
	}
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i]; //yaha max update ho rha hai elements check ke liye
		}
	}
	printf("\n\nThe max element in the array is: %d\n",max);
	printf("The min element in the array is: %d",min);
	
}