#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	if(a[i]>max)
	{
		max=a[i];
	}
	printf("%d",max);
	
}
