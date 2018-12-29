#include<stdio.h>
void main()
{
int i;
struct employee
{
char name[20];
int id;
int age;
char designation[10];
int salary;
}e1[5];
for(i=1;i<=5;i++)
{
printf("enter detail of employee %d\n",i);
printf("enter name:");
scanf("%s",e1[i].name);
printf("enter id:");
scanf("%d",&e1[i].id);
printf("enter age:");
scanf("%d",&e1[i].age);
printf("enter designation:");
scanf("%s",e1[i].designation);
printf("enter salary:");
scanf("%d",&e1[i].salary);
}
for(i=1;i<=5;i++)
printf("employee %d details\nname: %s\nid:%d\nage:%d\ndesignation:%s\nsalary:%d\n",i,e1[i].name,e1[i].id,e1[i].age,e1[i].designation,e1[i].salary);
}
