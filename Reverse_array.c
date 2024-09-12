#include<stdio.h>
int main(){
	int i,n,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int end=n-1;
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
