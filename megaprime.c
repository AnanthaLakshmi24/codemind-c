#include<stdio.h>
int prime(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
    }
		if(c==2)
		{
			return 1;
		} 
		else
		{
		return 0;
	    }
}

int main()
{
	int a,r,pc=0,dc=0,i;
	scanf("%d",&a);
	if(prime(a))
	{
		while(a!=0)
		{
			r=a%10;
			if(prime(r))
			{
				pc=pc+1;
			}
			dc=dc+1;
			a=a/10;
		}
     	if(pc==dc)
      {
    	printf("mega prime");
      }
   }
   else
    {   
	printf("not mega prime");
    }
}

