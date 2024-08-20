#include<Stdio.h>
int strict_even(int n)
{
	int rem,even=0,dc=0;
	while(n>0)
	{
		rem=n%10;
		if(rem%2==0)
		{
			even++;
		}
		dc=dc+1;
		n=n/10;
	}
	if(even==dc)
	{
		printf("strict even");
	}
	else
	{
		printf("not a strict even");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
    int res=strict_even(n);
    
}
