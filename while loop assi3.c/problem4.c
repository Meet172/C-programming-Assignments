//check the given number is prime or not.
#include<stdio.h>
int main()
{
	int i=2,n;
	printf("enter the no to check prime or not: ");
	scanf("%d",&n);
	while(i<n)
    {
    	if(n%i==0)
    	{
    	printf("Number is not Prime");
    	return 0;
        }
        i++;
    }
    printf("Number is Prime");

	return 0;

}