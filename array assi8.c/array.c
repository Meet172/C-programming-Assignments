// to display & search the elements in given array.
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
	// create a int ele for search a element.
	int ele;
	printf("\n\nEnter the element you want to search: ");
	scanf("%d",&ele); //input the element 
	int index=-1; 
	for(int i=0;i<5;i++) 
	{
		if(arr[i]==ele) // agar input element == arr[i] hoga to element found.
		{
		index=i; // ye batayega ki element konse index par mila hai.
		break; //element milne ke baad turant break the loop.
	    }
	}
	if(index==-1)
	{
		printf("The element is not found");
	}
	else
	{
		printf("The element %d is found at %d index",ele,index);
	}
}