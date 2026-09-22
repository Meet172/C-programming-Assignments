//write a C program to swap a two numbers by using temporarily third variable.
void main()
{
	int a=10;
	int b=20;
	int temp=a;//int temp= temporarily third variable.
	a=b;
	b=temp;
	printf("integer a: %d, integer b: %d",a,b);
	return 0;
	
}