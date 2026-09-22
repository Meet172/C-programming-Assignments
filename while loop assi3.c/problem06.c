//check the given number is perfect or not.
#include<stdio.h>
void main()
{
	int no,sum=0;
	int i=1;
	printf("Enter the number: ");
	scanf("%d",&no);
	
	while(i<no)
	{
		if(no%i==0)
		{
		sum+=i;
    	}
    	i++;
	}
	if(sum==no)
	printf("The given number is Perfect");
	else
	printf("The given number is Not Perfect");
	
}