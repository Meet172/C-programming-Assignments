void main()
{
	int size=10;
	int arr[size];
	int ci=0;
	
	while(1)
	{
	
	int choice;
	printf("\n.................\nEnter 1 to add\n");
	printf("Enter 2 to display\n");
	printf("Enter 3 to search\n");
	printf("Enter 4 to delete\n");
	printf("Enter 5 to update\n");
	printf("Enter 6 to sort\n");
	printf("Enter 7 to exit\n.................\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
	
		int ele;
		printf("Enter element you want to add");
		scanf("%d",&ele);
		addElement(arr,&ci,ele,size);
		
	}
	else if(choice==2)
	{
		displayArray(arr,ci);
		
	}else if(choice==3)
	{
		int ele;
		printf("Enter element you want to add");
		scanf("%d",&ele);
		int index=searchElement(arr,ci,ele);
		if(index!=-1)
			printf("Found");
		else
			printf("Not found");
	}
	else if(choice==4)
	{
		int ele;
		printf("Enter element you want to add");
		scanf("%d",&ele);
		int res=deleteElement(arr,&ci,ele);
		if(res==1)
			printf("\nDeleted succesfully");
		else
			printf("\nNot found");
	}
	else if(choice==5)
	{
		//sort wala kaam karo
	}
	else if(choice==6)
	{
		//update wala kaam karo
	}
	else if(choice==7)
	{
		break;
	}
	else
		printf("Invalid choice");
	}
	
}//main ends

void addElement(int* arr,int* ci,int ele,int size)
{
	if(*ci==size)
	{
		printf("Array Full");
		return;
	}
	arr[*ci]=ele;
	(*ci)++;
}

void displayArray(int* arr,int ci)
{
	if(ci==0)
	{
		printf("Array is empty");
		return;
	}
	
	
	for(int i=0;i<ci;i++)
		printf("%d ",arr[i]);
}

int searchElement(int* arr,int ci,int ele)
{
	for(int i=0;i<ci;i++)
	{
		if(arr[i]==ele)
			return i;
	}
	return -1;
}


int deleteElement(int* arr,int* ci,int ele)
{
	int index=searchElement(arr,  *ci , ele);
	if(index!=-1)
	{
		for(int i=index;i<*ci-1;i++)
			arr[i]=arr[i+1];
			
		(*ci)--;
		return 1;
	}
	else
		return 0;
	
	
}