//Write a C program to input five numbers and find their average.
#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum,avg;
	a=1;
	b=2;
	c=3;
	d=4;
	e=5;
	sum=a+b+c+d+e;
	avg=sum/5;
	printf("average of the given no: %d",avg);
	return 0;
}