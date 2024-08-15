//write a program to print odd numbers upto n?
#include<stdio.h>
int main()
{
	int n,i,even;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 if(i%2==1)
	 {
	 	printf("%d\n",i);
	 }
    }
}
