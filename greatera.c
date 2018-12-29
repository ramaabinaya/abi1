#include<stdio.h>
void main()
{
int a,b,c;
printf("entera,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is big",a);
else if(b>a&&b>c)
printf("%is big",b);
else
printf("%d is big",c);
}