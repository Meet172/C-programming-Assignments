#include<stdio.h>
void main()
{
	int no=1;
	int i=no;
//	printf("the 1 to 1000 even number:\n\n");
  printf("print number only divisible by 3 & 5:\n\n");
	while(i<=1000)
	{
	  // if(i%2==0)
	   if(i%3==0 && i%5==0)
		printf(" %d\n",i);
		i++;
	}
	
	
}