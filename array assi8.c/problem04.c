#include<stdio.h>
void main()
{
	int arr[10];
	printf("Enter the number:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nthe array elements is:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	int even=0; // ye sirf flag ka kaam karega agar even number nhi mila to.
	printf("\nThe even numbers is:\n");
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
		  printf("%d ",arr[i]);
		  even=1;
    	}
    }
    if(even==0)
    {
    	printf("No even number is found");
	}
	
    printf("\nThe odd numbers is:\n");
    
    int odd=0;// ye sirf flag ka kaam karega agar odd number nhi mila to.
    for(int i=0;i<10;i++)
    {
    	if(arr[i]%2!=0)
    	{
    		printf("%d ",arr[i]);
    		odd=1;
		}
	}
	if(odd==0)
    {
    	printf("No odd number is found");
	}
}