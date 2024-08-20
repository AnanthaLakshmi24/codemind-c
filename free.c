//free function
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*p,n;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		for(i=0;i<n;i++)
		
		{
			scanf("%d",p+i);
			printf("%u ",*(p+i));
		}
	}
	free(p);
	printf("\nafter using free function\n");
	for(i=0;i<n;i++)
	{
		printf("%u\n",p+i);
	}
}
