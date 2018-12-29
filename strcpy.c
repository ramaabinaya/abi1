#include<stdio.h>
int main()
{
char s1[100],s2[100],i;
printf("enter string s1:");
scanf("%s",s1);
for(i=0;s1[i]!='\o';i++)
s2[i]=s1[i];
s2[i]='\o';
printf("string s2:%s",s2);
return 0;
}