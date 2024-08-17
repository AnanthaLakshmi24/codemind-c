#include<stdio.h>
int prime(int n)
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
int revprime(int n)
{
	int d=0,rem,rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(prime(n))
	{
		d++;
	}
	return d;
}
int main()
{
int n,r,pc=0,dc=0,i;
	scanf("%d",&n);
	int c=prime(n);
	int s=revprime(n);
	if(prime(n))
	{
		while(n!=0)
		{
			r=n%10;
			if(prime(r))
			{
				pc=pc+1;
			}
			dc=dc+1;
			n=n/10;
		}
		if(pc==dc)
		{
			printf("circular prime");
		}
    }
    else
    {
    	printf("not circular prime");
	}
}

