//count the even values in an array
#include<stdio.h>
int main()
{
	int i,n,c=0;
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
	    {
	    	printf("%d\n",a[i]);
	    	c++;
		}
     }
     printf("c=%d",c);
}
