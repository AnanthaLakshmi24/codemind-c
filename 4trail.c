//write a program to print sum of n numbers using for loop?
#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
