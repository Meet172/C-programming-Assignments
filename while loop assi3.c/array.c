//Merge two arrays into the 3rd array.
#include<stdio.h>
int main()
{
	int arr[5],brr[10],crr[15];
	int i;
	printf("Enter the value of arr:\n");
	for(i=0;i<5;i++)//soft coded value add karne ke liye array size ke hisab se loop 5 bar chala.
	{
	scanf("%d",&arr[i]);//ex:1 2 3 4 5
    }
    printf("enter the value of brr:\n");
    for(i=0;i<10;i++)//soft coded value add karne ke liye array size ke hisab se loop 10 bar chala.
    {
    	scanf("%d",&brr[i]);//ex:1 2 3 4 5 6 7 8 9 10
	}
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i];//arr ko crr me copy kiya.
	}
		for(i=0;i<10;i++)
		{
		crr[i+5]=brr[i];//brr ko crr me 6th index se copy kiya.
	    }
	    printf("After the merge arr & brr the crr= ");
	    for(i=0;i<15;i++)//ab poora loop ek sath chala ke niche print kiya.
	printf(" %d",crr[i]);
	return 0;
	
}