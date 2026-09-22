//check the given number factorial
#include<stdio.h>
void main()
{
	int no,sum=1;
	int i=1;
	printf("Enter the number: ");
	scanf("%d",&no);
	
	while(no>0)
	{
		no%10;
		sum*=i;
		no/10;
	}
	printf("The given number factorial is: %d",sum);
	
}