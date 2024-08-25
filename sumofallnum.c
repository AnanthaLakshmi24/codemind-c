#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,c=0,rem;
	while(n>0)
	{
		rem=(n%10);
		c=(c+rem);
		n=(n/10);
	}
	printf("%d",c);
}
