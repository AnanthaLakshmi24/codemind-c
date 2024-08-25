#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	a=(a/a)*b;
	b=(b/b)*a;
	printf("%d\n%d",a,b);
	return 0;
}
