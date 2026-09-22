// merge two arrays into 3rd array.
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int crr[10];
	printf("Enter the elements of arr:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]); // pehle arr ke input scan kiye.
	}
    printf("\nEnter the elements of brr:\n");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&brr[i]);  // baad me brr ke input scan kiye.
	}
	printf("\nThe elements of arr is:");
		for(int i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);  //yaha arr ke input display kiye.
	}
	printf("\nThe elements of brr is:");
		for(int i=0;i<5;i++)
	{
		printf("\n%d",brr[i]);  //yaha arr ke input display kiye.
	}
	
	// yaha par arr aur brr ko crr me merge kiye.
	
	printf("\nAfter merge the arr & brr into crr:\n ");
     	for(int i=0;i<5;i++)
     	{
     		crr[i]=arr[i];   // before the merge crr=0 then after arr merge into crr=1 2 3 4 5 
		}
		for(int i=5,j=0;j<5;j++,i++)
     	{
            crr[i]=brr[j]; //yaha par crr ke 5th index se brr ke 0th index se 5th index tak mrge kiya.
		}                                //crr=1 2 3 4 5 & brr=10 20 30 40 50 then after the merge brr & crr=1 2 3 4 5 10 20 30 40 50
		for(int i=0;i<10;i++)
		{
			printf("%d ",crr[i]);
		}
		
		
}