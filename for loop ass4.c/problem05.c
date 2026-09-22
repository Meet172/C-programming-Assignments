//menu driven program.
#include<stdio.h>
void main()
{
	int no,choice;
	for(;;)// infinite loop for repeat the menu.
	{
		printf("\n-------------------Menu-------------------------\n");
		printf("\nEnter number 1 to check Even or Odd\n");
		printf("Enter number 2 to check Prime or not\n");
		printf("Enter number 3 to check Pallindrome or not\n");
		printf("Enter number 4 to check positive negative or zero\n");
		printf("Enter number 5 to reverse a number\n");
		printf("Enter number 6 to find sum of digits\n");
		printf("Enter number 7 to exit");
		printf("\n--------------------------------------------\n");
		
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("\nEnter the number you want to check: ");
			scanf("%d",&no);
			if(no%2==0)
			{
				printf("The given number is even");
			}
			else
			{
				printf("The given number is odd");
			}
		}//ends here
		
		if(choice==2)
		{
			printf("\nEnter the number you want to check: ");
			scanf("%d",&no);
			int flag=1;
			for(int i=2;i<no;i++)
			{
				if(no%i==0)
				{
					flag=0;
				}
			}
			if(flag==1)
			{
				printf("The given number is Prime");
			}
			else
			{
				printf("The given number is Not Prime");
			}
		}//ends here
		
		if(choice==3)
		{
			printf("\nEnter the number you want to check: ");
			scanf("%d",&no);
			int temp=no;
			int rem,rev=0;
			for(;no>0;no=no/10)
			{
				rem=no%10;
				rev=rev*10+rem;
			}
			if(temp==rev)
			{
				printf("The given number is Pallindrome");
			}
			else
			{
				printf("The given number is not Pallindrome");
			}
			
		}//ends here
		
		if(choice==4)
		{
			printf("\nEnter the number you want to check: ");
			scanf("%d",&no);
			if(no>0)
			{
				printf("The given number is Positive");
			}
			else if(no<0){
				printf("The given number is negative");
			}
			else 
			{
				printf("The given number is zero");
			}
			
		}//ends here
		
		if(choice==5)
		{
			printf("\nEnter the number you want to check: ");
			scanf("%d",&no);
			int temp=no;
			int rem,rev=0;
			for(;no>0;no=no/10)
			{
				rem=no%10;
				rev=rev*10+rem;
	    	}
	    	
	    	printf("The reverse of the given number is: %d",rev);
			
			
	    }//ends here
	    
	    if(choice==6)
	    {
	    	printf("\nEnter the number you want to check: ");
			scanf("%d",&no);
			int sum=0;
			int rem,rev=0;
			for(;no>0;no=no/10)
			{
				rem=no%10;
				sum+=rem;
			}
			printf("The sum of given digits is: %d",sum);
	    	
		}//ends here
		
		if(choice==7)
		{
			break; //for exit the loop as well as menu.
		}
    }
	
}