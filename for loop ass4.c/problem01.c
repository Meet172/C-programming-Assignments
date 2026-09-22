//write a c program for armstrong number by using for loop.
#include<stdio.h>
int main()
{
	int n,temp;
	int sum;
	int count;
	int power;
	int digit;
	int i;  //i ko n ke range tak numbers print karne ke liye use kiya
	int j;
	printf("Enter the Range of Number: ");
	scanf("%d",&n);
	printf("The given armstrong numbers is:\n\n");
	for(i=1;i<=n;i++) //yaha par i input kiye gaye n tak number print karega 
	{
	temp=i; //is process ko for loop ke bad isliye kiya kyuki for loop ke pehle i initially zero tha.
	sum=0;
	count=0;
	
	//first count the number.
    for(;temp>0;temp=temp/10)
	{
		count++;
	//	temp=temp/10;
	}
	//now again add no into temp.
	temp=i;
	//now calculate the power of that digit.
	for(;temp>0;temp=temp/10)
	{
		digit=temp%10;
	
		power=1;
	for(j=1;j<=count;j++)
	{
	power=power*digit;
    }
    sum=sum+power;
  //  temp=temp/10;
    }

	if(i==sum)
	printf(" %d",i);
    }
//	else
//	printf("The given number is not Armstrong");

	return 0;
	
}
 