#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int limit,i,sum;
printf("enter limit of the array:");
scanf("%d",&limit);
ptr=(int*)malloc(limit*sizeof(int));
for(i=0;i<limit;i++)
{
printf("enter elements %d:",i+1);
scanf("%d",(ptr+i));
}
printf("entered elements are:\n");
for(i=0;i<limit;i++)
printf("%d\n",*(ptr+i));
sum=0;
for(i=0;i<limit;i++)
sum=sum+*(ptr+i);
printf("sum of array element is:%d\n",sum);
free(ptr);
return 0;
}

