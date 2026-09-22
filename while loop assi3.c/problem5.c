//write a c program for armstrong number by using while loop.
#include<stdio.h>
int main()
{
	int n,temp;
	int sum=0;
	int count=0;
	int power;
	int digit;
	int i;
	printf("Enter the Number: ");
	scanf("%d",&n);
	temp=n;
	//first count the number.
    while(temp>0)
	{
		count++;
		temp=temp/10;
	}
	//now again add no into temp.
	temp=n;
	//now calculate the power of that digit.
	while(temp>0)
	{
		digit=temp%10;
	
		power=1,i=1;
	while(i<=count)
	{
	power=power*digit;
	i++;
    }
    sum=sum+power;
    temp=temp/10;
    }
	if(n==sum)
	printf("The given number is Armstrong");
	else
	printf("The given number is not Armstrong");
	
	return 0;
	
}