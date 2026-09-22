//Write a C program to check whether given year is leap or not.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	if(year%400==0)
	printf("Year is Leap");
	else
    if(year%100==0)
    printf("Year is not leap");
    else
	if(year%4==0)
	printf("year is leap");
    else
    printf("Year is not leap");
	
	return 0;
	
}