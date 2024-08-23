#include<stdio.h>
int palin(int n)
{
	int rem,rev=0,temp;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
    }
	  if(temp==rev)
	  {
	  	printf("palin");
	  }
	  else
	  {
	  	printf("not palin");
	  }
}
   int main()
{
    int n;
    scanf("%d",&n);
	palin(n);	
}

