#include<stdio.h>
int abs(int);
int main()
{
	int i,flag=0,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[abs(a[i])]>0 && a[abs(a[i])]!=999)
		{
			a[abs(a[i])]=a[abs(a[i])]*(-1);
		}
		else if(a[abs(a[i])]<0 || a[abs(a[i])]==999)
		{
			printf("yes");
			flag=1;
			break;
		}
		else
		{
			a[abs(a[i])]=999;
		}
	
	}
		if(flag==0)
		printf("no");
		return 0;
}
int abs(int a)
{
	if(a>0)
	return a;
	else
	return a*(-1);
}
