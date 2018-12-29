#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int limit;
int i;
int sum;
printf("enter limit of the array:");
scanf("%d",&limit);
ptr=(int*)malloc(limit*sizeof(int));
for(i=0;i<limit;i++)
{
print("enter element %d:",i+1);
scanf("%d",(ptr+1));
}
printf("\nentered array elements are:\n");
for(i=0;i<limit;i++)
{
printf("%d\n",*(ptr+1));
}
sum=0;