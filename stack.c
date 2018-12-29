#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
clrscr();
top=-1;
printf("\nenter the size of stack[max 100]:");
scanf("%d",&n);
printf("\n\tstack operation using arrays");
printf("\n1.push\n2.pop\n3.display\n4.exit");
do
{
printf("\nenter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:printf("exit point");break;
default:printf("\nenter a valid choice");break;
}
}while(choice!=4);
}
void push()
{
if(top>=n-1)
printf("\n stack is overflow");
else
printf("enter a value to be pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}
void pop()
{
if(top<=-1)
printf("\nstack is under flow");
else
{
printf("\nthe poped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("the element is stacked\n");
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);
}
else
printf("\nthe stack is empty");
}
