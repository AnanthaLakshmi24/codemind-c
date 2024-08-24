//reverse array through function
#include<stdio.h>
void print_array(int a[],int n)
{
	int arr[n],k=0,i;
	for(i=n-1;i>=0;i--) {
		arr[k]=a[i];
		k+=1;
	}
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
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
	print_array(a,n);
}
