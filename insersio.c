#include<stdio.h>
void main()
{
int a[10],i,j,n,temp;
printf("enter the number of elements.....\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("entered elements\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
for(i=1;i<n;i++)
{
temp=a[i];
for(j=i;j>0 && a[j-1]>temp;j--)
a[j]=a[j-1];
a[j]=temp;
}
printf("\nthe sorted array is....\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
