#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
int choice,value;
printf("\n::stack using linked list::\n");
while(1)
{
printf("\n******MENU******\n");
printf("1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the value to be inserted:");
scanf("%d",&value);
push(value);
break;
case 2:pop();break;
case 3:display();break;
case 4:exit(0);
default:printf("\nwrong selection!!! please try again!!!\n");
}
}
}
void push(int value)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
if(top==NULL)
newnode->next=NULL;
else
newnode->next=top;
top=newnode;
printf("\ninsertion is sucessful!!!\n");
}
void pop()
{
if(top==NULL)
printf("\nstack is empty!!!\n");
else
{
struct node *temp=top;
printf("\ndeleted element:%d",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
printf("\nstack is empty!!!\n");
else
{
struct node *temp=top;
while(temp->next!=NULL)
{
printf("%d--->",temp->data);
temp=temp->next;
}
printf("%d--->NULL",temp->data);
}
}
