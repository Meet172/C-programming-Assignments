//check the given number is perfect or not.
#include<stdio.h>
void main()
{
	int no,sum;
	printf("Enter the range to find perfect numbers: ");
	scanf("%d",&no);
	printf("\nThe Perfect numbers in between given range:\n");
	
	for(int i=1;i<no;i++) // i se diye range tak numbers print karega.
	{
		sum=0; // yaha sum har naye number ke liye 0 se start hoga.
		for(int j=1;j<i;j++) // inner loop me check hoga ke number perfect hai ki nhi.
		{
	    	if(i%j==0)
	    	{
	    	sum+=j;
        	}
        } 

        	if(sum==i)  //ex= i=6 & sum=6 then 6 is perfect number.
        	{
        	printf("\n%d",i);
            }
    }
}