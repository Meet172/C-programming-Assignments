//Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
int main()
{
	int min,a,b;
	printf("enter the minutes: ");
	scanf("%d",&min);
	a=min/60;
	b=min%60;
	printf("given minutes into hr: %d\n",a);
	printf("remaining minutes: %d",b);
	return 0;
}