#include<stdio.h>
void main()
{
int n,d,rev=0,temp;
printf("enter value");
scanf("%d",&n);
temp=n;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(temp==rev)
printf("palindrome");
else
printf("not palindrome");
}
