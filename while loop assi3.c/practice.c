int add(int x,int y);
void main()
{
	int a,b;
    printf("Enter the 1st num: ");
	scanf("%d",&a);
	printf("Enter the 2nd num: ");
	scanf("%d",&b);
//	add(&a,&b);
    int res=add(a,b);
	printf("%d",res);
}
int add(int x,int y)
{
   int sum=x+y;
   //printf("the sum of 1st and 2nd is %d",sum);
   return sum;
}