//check the given number is even or odd.
#include<stdio.h>
int x; // <--- ye ek global variable hai,jiski wajah se ham dono fun me x ki value scan aur access kar sakte he.

void evenodd();// this is funtion declaration.
void main()
{
	printf("Enter the number: ");
	scanf("%d",&x);
	evenodd();// this is function calling.
}
void evenodd()//this is function defenition.
{
	if(x%2==0 )
	printf("Given number is Even");
	else
	printf("Given number is Odd");
}
	