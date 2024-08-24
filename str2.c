//sum of digits of string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i,sum=0;
	for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]>='0' && str[i]<='9')
    	{
    		sum=sum+str[i]-48;
		}
	}
	printf("%d",sum);
}
