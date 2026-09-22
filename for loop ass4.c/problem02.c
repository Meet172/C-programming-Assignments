//check the given range 1 to n number is prime or not.
#include<stdio.h>
int main()
{
	int n;
	int i;
	int j;
	int flag;
	printf("Enter the range to find prime numbers: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++) // i n tak number print karega.
    {
    //	flag=0;
    for(j=2;j<i;j++) // j ye check krega. ki i%j==0 hai ki nahi agar hai to loop break aur number skip & not prime.
    {               
    	if(i%j==0) 
    	{
    //	flag=1;
    	break;
        }
    }
        if(j==i) 
        {
    	printf(" %d",i);
        }
    //	return 0;
        
    }
   // printf("Number is Prime");

	return 0;

}