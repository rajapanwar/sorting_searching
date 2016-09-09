#include<stdio.h>
int main()
{
	int i,n,sum=0,originalsum,a[100],element;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	originalsum=((n+2)*(1+n))/2;
	element=originalsum-sum;
	printf("missing element is %d",element);
	return 0;
}
