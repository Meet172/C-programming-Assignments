//check the given number is even or odd.
#include<stdio.h>
int evenodd();
void main()
{
	int result=evenodd();
	if(result==1)
	printf("Given number is Even");
	else
	printf("Given number is Odd");  
}
int evenodd()
{	
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(x%2==0 )
	return 1;
	else
	return 0;
}