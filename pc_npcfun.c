#include<stdio.h>
int prime( int n)
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
void prime_c_non_prime_c(int a[],int n)
{
	int i,pc=0,npc=0;
	for(i=1;i<=n;i++)
	{
		if(prime(a[i]))
		{
			pc++;
		}
		else
		{
			npc++;
		}
	}
	printf("%d %d",pc,npc);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	prime_c_non_prime_c(a,n);
	
}
