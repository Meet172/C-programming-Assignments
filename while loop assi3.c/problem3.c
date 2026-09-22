//Sum of numbers in given range.Find sum of numbers from start to end.Input: start = 1, end = 5;
#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=5)
	{
		sum=i+sum;
		i++;
		printf("%d",sum);
    }
//	printf("%d",sum);// printf isliye loop ke bahar likha ki hame sirf 1-5 ke beech hone wale add ka total chahiye tha=15.
	
	return 0;
}