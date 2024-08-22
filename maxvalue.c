#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	printf("enter elements to array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=array_max(a,n);
	printf("%d",max);
}
int array_max(int *arr, int m)
{
	int i,maxval=arr[0]; 
	for(i=1;i<m;i++)
	{
		if(arr[i]>maxval)
		{
			maxval=arr[i];
		}
	}
	return maxval;
}
