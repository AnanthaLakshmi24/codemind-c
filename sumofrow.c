#include<stdio.h>
int main()
{
	int r,c,sum=0;
	scanf("%d%d",&r,&c);
	int a[r][c];
	int i,j;
	for(i=0;i<1;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
	    }
	    printf("%d",sum);
    }  
}
