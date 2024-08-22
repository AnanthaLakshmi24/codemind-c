#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
		  printf("a is big");
		}
		else
		{
			printf("c is small");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is big");
		}
		else
		{
			printf("b is small");
		}
	}
}
