//write a program to check whether character is vowel or consonant.
#include<stdio.h>
int main()
{

	int ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("Given character is Vowel");
	else
	printf("Given character is Consonant");
	
	return 0;
}