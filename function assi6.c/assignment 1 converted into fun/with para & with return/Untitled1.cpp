#include<stdio.h>
int evenodd(int a);
int main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	int result=evenodd(x);
	if(result==1)
	printf("Given number is Even");
	else
	printf("Given number is Odd");
	return 0;
	
}
int evenodd(int a)
{
	if(a%2==0 )
	return 1;
	else
	return 0;
}