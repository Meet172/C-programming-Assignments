void main()
{
   int a=10,b=20;
   printf("before swap a=%d,b=%d\n",a,b);
   swap(&a,&b);
   printf("after swap a=%d,b=%d",a,b);
}
void swap(int*x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
