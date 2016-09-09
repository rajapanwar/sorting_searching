#include<stdio.h>
int main()
{
	int n,i,max=0,a[100],index;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[a[i]%n]+=n;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]/n>max)
		{
		max=a[i]/n;
		index=i;
		}
	}
	printf("%d",index);
	return 0;
}
