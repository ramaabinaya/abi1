#include<stdio.h>
void main()
{
int a[10],n,i,s,low,high,mid;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements in ascending order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nentered elements in array");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
printf("\nenter the element to be searched:");
scanf("%d",&s);
low=0;
high=n-1;
mid=(low+high)/2;
while(low<=high)
{
if(a[mid]==s)
break;
else if(a[mid]<s)
low=mid+1;
else
high=mid-1;
mid=(low+high)/2;
}
if(low>high)
printf("element isn't in the array");
else
printf("the element %d is found at the location %d",s,mid+1);
}