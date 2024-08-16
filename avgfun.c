//find the avg of two numbers
#include<stdio.h>
float avg(float a,float b)
{
	float c;
	c=(a+b)/2;
	return c ;
}
int main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	float d=avg(a,b);
	printf("%0.2f",d);
}

