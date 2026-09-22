//Check whether triangle is Equilateral,Isosceles or Scalene.
#include<stdio.h>
void triangle();
void main()
{
//	int a,b,c;
	printf("Enter the sides of triangle:");
//	scanf("%d%d%d",&a,&b,&c);
	triangle();
}
void triangle()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)//triangle ban raha hai ki nahi uske liye condition.
	{
	  if(a==b && b==c) //teeno side same=equilateral.
	printf("Given Triangle is Equilateral");
	    else
        	if(a==b || b==c || c==a) //teeno me se ek bhi side same to Isosceles.
	printf("Given Triangle is Isosceles");
           	else
	printf("Given Triangle is Scalene"); //koi bhi side same nahi to scalene.
    }
	else
	{
	printf("Invalide Triangle");
    }
	return 0;
}