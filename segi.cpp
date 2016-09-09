#include<stdio.h>
void swap(int*,int*);
void segrigate(int[],int);
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	segrigate(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	void segrigate(int a[],int n)
	{
		int l=0,r=n-1;
		while(r>l)
		{
			while(a[l]%2==0 && r>l)
			{
			l++;
			}
			while(a[r]%2!=0 && r>l)
			{
				r--;
			}
			if(r>l)
			{
				swap(&a[l],&a[r]);
				l++;
				r--;
			}
		}
	}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
		
