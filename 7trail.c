//write a program to print the factors of given number ?
//write a program to print even numbers upto n?
#include<stdio.h>
int main()
{
	int n,i,even;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 if(n%i==0)
	 {
	 	printf("%d\n",i);
	 }
    }
}
