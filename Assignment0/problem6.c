//Write a C program to find a square & cube of given no.
#include<stdio.h>
int main()
{
	int x,a,b;
	printf("enter a no: ");
	scanf("%d",&x);
	a=x*x;
	b=x*x*x;
	printf("square of given no:%d\n",a);
	printf("cube of given no:%d ",b);
	return 0;
	
}