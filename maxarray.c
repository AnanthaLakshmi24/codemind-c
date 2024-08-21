//function max through array
#include<stdio.h>
int max_array(int a[],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
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
   int res=max_array(a,n);
   printf("%d ",res);
}
