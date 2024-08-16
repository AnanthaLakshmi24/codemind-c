//find the sum of two matrices
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
	int m,n;
	scanf("%d%d",&m,&n);
	int b[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	int d[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}

