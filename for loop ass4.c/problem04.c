//check the given number is strong or not.
#include<stdio.h>
void main()
{
	int n,sum,digit,no,temp,j,i;
	printf("Enter The Number: ");
	scanf("%d",&n); //range input lo ex: 150.
	
	for(i=1;i<=n;i++)//i print to 1-150.
	{
     
    no=i; //no ko ham operations karne ke liy use karenge.
    temp=i;//pehle no ko kisi temporary variable me save karo.
	sum=0;
	
	
	for(;no>0;no=no/10) //no ex=145 then no/10=14
	{
		digit=no%10; //no=145 then no%10=5
		
	int fact=1; //last digit ka factorial nikalne ke liye fact variable banao.
	
	for(j=1;j<=digit;j++) //jab tak i<=5 nahi hota tab tak loop chalega.
	{
		fact*=j; //1x1=1, 1x2=2, 2x3=6, 6x4=24, 24x5=120.

	}
	sum=sum+fact; //0+120=120, 120+24=144, 144+1=145. sum will be 145.
//	no=no/10;//number will be 14, & again line no.12 or outer while executing.
    }
	if(sum==temp)
	printf("%d ",temp);
    }
    
}