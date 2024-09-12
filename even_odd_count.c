#include<stdio.h>
int main(){
	int i,n,temp;
	int even=0,odd=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
		    even=even+a[i];
		}
		else{
			odd=odd+a[i];
		}
	}
	printf("%d %d",odd,even);
}
