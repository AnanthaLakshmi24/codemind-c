#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n],c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c++;
		}
	}
	if(c>=1)
	{
		printf("true");
	}
	else
	{
		printf("False");
	}
}
