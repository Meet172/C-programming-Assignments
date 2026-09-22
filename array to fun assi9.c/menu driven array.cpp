#include<stdio.h>
void addele(int*,int*,int,int);
void displayele(int*,int);
void searchele(int*,int*,int);
void deletele(int*,int*,int,int);
void updatele(int*,int,int,int);
void sortele(int*,int*,int);
void revarray(int*,int*);
int sumele(int*,int*);
int main()
{
	int size;
	printf("Enter the size of an array: ");
	scanf("%d",&size);
	int arr[size];
	int ci=0;
	int ele,i;
	int choice;
	
while(1)
{
	    printf("\n\n------------------Menu-------------------\n");
		printf("Enter 1 to add elements\n");
		printf("Enter 2 to Display the elements\n");
		printf("Enter 3 to search element\n");
		printf("Enter 4 to delete element\n");
		printf("Enter 5 to update element\n");
		printf("Enter 6 to sort element\n");
		printf("Enter 7 to reverse the array\n");
		printf("Enter 8 to sum of elements in array\n");
		printf("Enter 9 to exit");
		printf("\n-------------------------------------\n");
		
	scanf("%d",&choice);
	if(choice==1)
	{
	 printf("Add the elements: ");
	 scanf("%d",&ele);
	 addele(arr,&ci,ele,size);
	}
    
    else if(choice==2)
    {
     displayele(arr,ci);
	}
	
    else if(choice==3)
	{
		printf("Enter the element you want to search: ");
		scanf("%d",&ele);
		searchele(arr,&ci,ele);
		
	}
	
	else if(choice==4)
	{
		printf("Enter the element you want to delete: ");
		scanf("%d",&ele);
		deletele(arr,&ci,ele,size);
	}
	
    else if(choice==5)
	{
		int oldValue,newValue;
     	printf("Enter element to update: ");
         scanf("%d", &oldValue);
         
        printf("Enter new value: ");
        scanf("%d", &newValue);
        
        updatele(arr,oldValue,newValue,size);
		
	}
	
	else if(choice==6)
	{
		displayele(arr,ci);
		
		sortele(arr,&ci,size);
		
		printf("\nAfter sorted the array is:\n");
		for(int i=0;i<ci;i++)
		{
			printf(" %d",arr[i]);
		}
	}
	
	else if(choice==7)
	{
		revarray(arr,&ci);
	}
	
	else if(choice==8)
	{
		int result=sumele(arr,&ci);
		printf("The sum of all elements is: %d",result);
	}
	
    else if(choice==9)
	{
		break;
	}
	else
    {
    printf("Invalid choice! Please enter a valid choice.\n");
    }
   
 }
}//main ends here.

void addele(int* arr,int* ci,int ele,int size)
{
	if(*ci<size)
	{
		arr[*ci]=ele;
		(*ci)++;
		
    	if(*ci==size)
    	{
    		printf("\nArray is Full");
		}
	}
}//ends here.

void displayele(int* arr,int ci)
{
		printf("The Entered elements is: \n");
    	printf("[");
    	for(int i=0;i<ci;i++)
    	{
    
    		printf(" %d",arr[i]);
    
		}
		printf("]");
}

void searchele(int* arr,int* ci,int ele)
{
	int index=-1;
	for(int i=0;i<*ci;i++) 
   	{
	    if(arr[i]==ele) // agar input element == arr[i] hoga to element found.
	   	{
	    index=i;
	    printf("The element %d is found at %d index\n",ele,index);
	    //isme mene break nhi lagaya kyuki ek hi array me searched ki hui multiple values ho sakti he,
	    //to break lagane se hame ek hi value & index milega baki ke skip ho jayenge.
	    }
	}
	if(index==-1)
	{
		printf("The element is not found");
    }
		
   	
}

void deletele(int* arr,int* ci,int ele,int size)
{
	int index=-1;
	for(int i=0;i<*ci;i++) 
   	{
	    if(arr[i]==ele)
	    {
	    index=i;
	    break;
    	}
    }
    
    if(index==-1)
	{
		printf("The element is not found");
    }
    else
    {
	    	for(int j=index;j<*ci-1;j++)
	    	{
	    		arr[j]=arr[j+1];
			}
			(*ci)--;
			printf("Deleted");
	}
    	
}

void updatele(int* arr,int oldValue,int newValue,int size)
{
    int index = -1;

   // printf("Enter element to update: ");
    //scanf("%d", &oldValue);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == oldValue)
        {
            index = i;
            printf("The element is found at %d index\n",index);
            break;
        }
    }

    if(index != -1)
    {
      //  printf("Enter new value: ");
       // scanf("%d", &newValue);

        arr[index] = newValue;
        printf("The element is updated succesfully");
    }
    else
    {
        printf("Element is not found");
    }
}

void sortele(int* arr,int* ci,int size)
{
	for(int i=0;i<*ci-1;i++)
	{
		for(int j=i+1;j<*ci;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
}

void revarray(int*arr,int*ci)
{
	for(int i = *ci - 1; i >= 0; i--)
    {
    printf("%d ", arr[i]);
    } 
}

int sumele(int*arr,int*ci)
{
	int sum=0;
	for(int i=0;i<*ci;i++)
	{
	 sum+=arr[i];	
	}
	 return sum;	
}