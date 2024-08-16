#include<stdio.h>
int main()
{
	int a=10,b=2,res,res1,res2,res3,res4;
	res=a&b;
	res1=a|b;
	res2=a^b;
	res3=a<<b;
	res4=a>>b;
	printf("a&b=%d\n",res);
	printf("a|b=%d\n",res1);
	printf("a^b=%d\n",res2);
	printf("a<<b=%d\n",res3);
	printf("a>>b=%d",res4);
	return 0;
}
