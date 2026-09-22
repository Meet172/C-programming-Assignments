//Write a c program on given discount by calculating the purchased price.
#include<stdio.h>
int disc();
int main()
{
//	char ch;
//	int price;
	float discount;
	discount=disc();
//	float total;
//	printf("Enter the Price: ");
//	scanf("%d",&price);
//	printf("Are you a student(y/n): ");
//	scanf(" %c",&ch);
}
int disc()
{
	char ch;
	int price;
	float discount;
	float total;
	printf("Enter the Price: ");
	scanf("%d",&price);
	printf("Are you a student(y/n): ");
	scanf(" %c",&ch);
	{
	if(ch=='y')
	
		if(price>500)
		discount=price*20/100;
		else
		discount=price*10/100;
	else
	    if(price>600)
	    discount=price*15/100;
	    else
	    discount=0;
	 
}
	 printf("given discount: %.2f",discount);
	 total=price-discount;
	 printf("The total is: %.2f",total);
	 return discount;
}