#include<stdio.h>
int main()
{
	int r,c,sum=0;
	scanf("%d%d",&r,&c);
	int a[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d ",a[i][j]);
	    }
	    printf("\n");
    }  
    for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
	    }
	    printf("%d ",sum);
    }
    printf("\n");
}
