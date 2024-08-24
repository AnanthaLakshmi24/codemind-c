//self diving using function
#include<stdio.h>
int self_divd(int n)
{
	int temp=n,r;
	while(n!=0)
	{
		r=n%10;
		if(r==0 || temp % r!=0)
		{
			return 0;
		}
		n=n/10;
	}
	return 1;
}
int main()
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(self_divd(i)==1)
		{
			printf("%d ",i);
		}
	}
}
