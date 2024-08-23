#include<stdio.h>
int main()
{
	int a,b,c,d,e,total,avg,p;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=(a+b+c+d+e);
	avg=(a+b+c+d+e)/5;
	p=(total/500)*100;
	
	if(p>=70)
	{
		printf("grade A");
	}
	else if(p>=60 && p<70)
	{
		printf("grade B");
	}
	else if(p>=50 && p<60)
	{
		printf("grade C");
	}
	else if(p<50)
	{
		printf("fail");
	}
}
