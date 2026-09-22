void marks(int);
void main()
{
	int a;
	printf("Enter the marks: ");
	scanf("%d",&a);
	marks(a);
}
void marks(int x)
{
	{
		if(x>75)
		printf("Distinction");
		else
		  if(x>65)
		  printf("First Class");
		  else
		   if(x>55)
		   printf("Second Class");
		   else
		    if(x>=40)
		    printf("Pass Class");
		    else
		    printf("Fail");
		
		return 0;
	}
}