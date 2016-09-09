#include<stdio.h>

void maxdifference(int [],int);
int main()
{
	int i,n,a[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	maxdifference(a,n);
	return 0;
}

void maxdifference(int a[],int n)
{
	int maxd,min,i;
	min=a[0];
	maxd=a[1]-a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]-min>md)
		md=a[i]-min;
		
		if(a[i]<min)
		min=a[i];
		
	}
	
	printf("%d",md);
	
}
