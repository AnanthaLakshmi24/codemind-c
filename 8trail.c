//write a program to print the count of factors of n?
#include<stdio.h>
int main()
{
	int n,i;
	int count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 if(n%i==0)
	 {
	 	count++;
	 	printf("%d\n",i);
	 }
    }
    printf("%d",count);
    
}
