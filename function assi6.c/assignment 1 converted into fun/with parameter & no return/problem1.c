//check the given no. even or odd.
#include<stdio.h>
void evenodd(int a);// this is function declaration.
void main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	evenodd(x);// this is function calling.
	//main ends here.
}
void evenodd(int a)//this is function definition.
{	
	if(a%2==0 )
	printf("Given number is Even");
	else
	printf("Given number is Odd");
}