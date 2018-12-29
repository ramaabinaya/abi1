#include<stdio.h>
struct job
{
char process[10];
int atime;
int btime;
}p[10];
void main()
{
int n,i,j,turnaroundtime=0;
struct job temp;
printf("\nenter no. of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter process %d ,arivaltime and burst time:",i+1);
scanf("%s%d%d",&p[i].process,&p[i].atime,&p[i].btime);
}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(p[i].atime>p[j].atime)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
printf("process based on arrival time:");
printf("\nprocess\tatime\tburst time");
for(i=0;i<n;i++)
printf("\n%s\t%d\t%d",p[i].process,p[i].atime,p[i].btime);
for(i=0;i<n;i++)
turnaroundtime=turnaroundtime+p[i].btime;
printf("\nturnaroundtime= %d",turnaroundtime);
}