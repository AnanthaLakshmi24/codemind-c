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
	int min=array_min(a,n);
	printf("%d",min);
}
int array_min(int arr[], int m)
{
	int i,minval=arr[0]; 
	for(i=1;i<m;i++)
	{
		if(arr[i]<minval)
		{
			minval=arr[i];
		}
	}
	return minval;
}
