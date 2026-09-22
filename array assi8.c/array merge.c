void storelement(int*,int);
void displayele(int*,int);
void merge(int*,int,int*,int);
void main()
{
	int arr[100];
	int brr[100];
	printf("Enter the elements of arr:\n");
	{
	storelement(arr,5);
    }
    printf("\nEnter the elements of brr:\n");
    {
    storelement(brr,10);
    }
	printf("\nThe elements of arr is:");
	{
		displayele(arr,5);
	}
    
	printf("\nThe elements of brr is:");
	{
		displayele(brr,10);
	}
	printf("\nAfter merge elements:");
	merge(arr,5,brr,10);
		
}//main ends
void storelement(int* ptr,int size)
{
	for(int i=0;i<size;i++)
    {
    	scanf(" %d",&ptr[i]);  // baad me brr ke input scan kiye.
	}
}
void displayele(int*ptr,int size)
{
		for(int i=0;i<size;i++)
	{
		printf(" %d",ptr[i]);  //yaha arr ke input display kiye.
	}
}
void merge(int*arr,int size1,int*brr,int size2)
{
	for(int i=size1,j=0;j<size2;i++,j++)
	{
		arr[i]=brr[j];
	}
	for(int i=0;i<15;i++)
	{
	printf(" %d",arr[i]);
    }
}
