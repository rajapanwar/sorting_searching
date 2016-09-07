
#include<stdio.h>
void bubble_sort(int a[],int n)
{
int i,j,temp;
for(i=n-2;i>=0;i--)
 for (j=0;j<=i;j++)
  {
    if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
    }
 }
 int main()
 {
    int a[100],n,i;
    printf("\n\t\tEnter the elements in array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n\t Original array \n");
    for(i=0;i<n;i++)
     printf("\n\t %d",a[i]);
    bubble_sort(a,n);
    printf("\n\t Sorted array \n");
    for(i=0;i<n;i++)
        printf("\n\t %d",a[i]);
    return 0;
 }
