#include<stdio.h>
int nprime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int res=nprime(n);
	for(i=n-1;;i--)
	{
		if(nprime(i))
		{
			printf("%d ",i);
			break;
		}
	}

}
