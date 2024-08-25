#include<stdio.h>
int swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	printf("\n  swap:x=%d,y=%d",*x,*y);
}
int main()
{
	int a=10,b=20;
	printf("before swap:a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\n after swap:a=%d,b=%d",a,b);
}
