#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	float sum=0;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	float median;
	if (n%2==0){
	  median=(a[n/2-1]+a[n/2])/2.0;
	}
	else{
		median=a[n/2];
	}
	int mode=a[0];
	int c=1,max=1;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		for(j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				c++;
		    }
			else{
				if(c>max)
					max=c;
					mode=a[i-1];
				}
				c=1;
	    }
	}
	float mean=sum/n;
	printf("%0.2f %0.2f %d",mean, median,mode);
	
}
