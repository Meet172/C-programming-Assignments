//check the given number is strong or not.
#include<stdio.h>
void main()
{
	int no,sum=0;
	int digit;
	printf("Enter The Number: ");
	scanf("%d",&no); //number input lo ex: 145.
	int temp=no;//pehle no ko kisi temporary variable me save karo.
	
	
	while(no>0)
	{
		digit=no%10; //number ka last digit nikalo. (i.e.,5)
		
	int fact=1,i=1; //last digit ka factorial nikalne ke liye fact variable banao.
	
	while(i<=digit) //jab tak i<=5 nahi hota tab tak loop chalega.
	{
		fact*=i; //1x1=1, 1x2=2, 2x3=6, 6x4=24, 24x5=120.
		i++;
	}
	sum=sum+fact; //0+120=120, 120+24=144, 144+1=145. sum will be 145.
	no=no/10;//number will be 14, & again line no.12 or outer while executing.
    }
	if(sum==temp)
	printf("The given number is Strong");
	else
	printf("The given number is Not Strong");
}