//prime && palin code
int palin(int a)
{
	int rev=0,rem,temp;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	return rev;
}
int prime(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
	if(a%i==0 )
	{
		c=c+1;
	}
   }
   return c;
}
int main()
{
	int a;
	scanf("%d",&a);
	int res=palin(a);
	int c=prime(a);
	if(c==2 && res==a)
	{
		printf("prime palin\n");
	}
	else
	{
		printf("not prime palin");
	}
}

	

