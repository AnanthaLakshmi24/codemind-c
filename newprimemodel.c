#include<stdio.h>
#include<math.h>
#include<stdbool.h>//used to for true || false
bool prime(int n)
{
	if(n<=1)
	{
		return false;
	}
	if(n==2)
	{
		return true;
	}
	int i;
	for(i=2;i<n-1;i++)//for(i=2;i<=sqr(n);i++) //for(i=0;i<n/2;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;

}
int main()
{
	int n;
	scanf("%d",&n);
	 int res=prime(n);
	 if(prime(n))
	 {
	 	printf("prime");
	 }
	 else
	 {
	 	printf("not prime");
	 }
}
