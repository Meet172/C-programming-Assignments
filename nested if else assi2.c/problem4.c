void main()
{
	int a;
	printf("Enter the marks: ");
	scanf("%d",&a);
	{
		if(a>75)
		printf("Distinction");
		else
		  if(a>65)
		  printf("First Class");
		  else
		   if(a>55)
		   printf("Second Class");
		   else
		    if(a>=40)
		    printf("Pass Class");
		    else
		    printf("Fail");
		
		return 0;
	}
}