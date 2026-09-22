//Write a C program to check given 3 digit number is pallindrome or not.
#include<stdio.h>      //pallindrome=121,212,etc.
void main()            //pallindrome!=123,223etc.
{
	int x,a,b;
	 printf("Enter the three digit number: ");
	  scanf("%d",&x);
	a=x/100;
	b=x%10;
	if(a==b)
	 printf("Given number is Pallindrome");
	else
	 printf("Number is not Pallindrome");
	return 0;
	
}