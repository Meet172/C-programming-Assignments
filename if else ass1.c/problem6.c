//write a program to check whether character is Uppercase or lowercase.
#include<stdio.h>
int main()
{
	int ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("Given character is Uppercase");
	else
	if(ch>='a' && ch<='z')
	printf("Given character is Lowercase");
	else
	printf("Given character is not Alphabet");
	return 0;
	
}