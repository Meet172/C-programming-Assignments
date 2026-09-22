//Write a C program to check whether person is eligible or not to vote.
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	if(age>=18)
	printf("Person is eligible to vote");
	else
	printf("Person is not eligible to vote");
	return 0;
}