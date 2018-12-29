#include<stdio.h>
void main()
{
int a[10],search,i,n,yes=0;
printf("enter the number of elements in array\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to search\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
yes=1;
printf("%d is present at location %d \n",search,i+1);
break;
}
}
if(yes==0)
printf("%d isn't preset in the array",search);
}