//Write a c program on given discount by calculating the purchased price.
#include<stdio.h>
void disc(char*,int*,float*,float*);
int main()
{
	char ch;
	int price;
	float discount;
	float total;
	printf("Enter the Price: ");
	scanf("%d",&price);
	printf("Are you a student(y/n): ");
	scanf(" %c",&ch);
	disc(&ch,&price,&discount,&total);
}
void disc(char* cha,int* pri,float* disco,float* total)
{
	if(*cha=='y')
	
		if(*pri>500)
		*disco=*pri*20/100;
		else
		*disco=*pri*10/100;
	else
	    if(*pri>600)
	    *disco=*pri*15/100;
	    else
	    *disco=0;
	 
	 printf("given discount: %.2f",*disco);
	 *total=*pri-*disco;
	 printf("The total is: %.2f",*total);
	 return 0;
}