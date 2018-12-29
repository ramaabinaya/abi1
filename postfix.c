#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define MAX 50
int stack[MAX];
char post[MAX];
int top=1;
void pushstack(int temp);
void calculator(char c);
void main()
{
int i;
clrscr();
printf("enter the postfix notation:");
gets(post);
for(i=0;i<strlen(post);i++)

{
if(post[i]>='0'&& post[i]<='9')
pushstack(i);
if(post[i]=='+'||post[i]=='-'||post[i]=='*'||post[i]=='/'||post[i]=='^')
calculator(post[i]);
}
printf("\nresult:%d",stack[top]);
getch();
}
void pushstack(int temp)
{
top++;
stack[top]=(int)(post[temp]-48);
}
void calculator(char c)
{
int a,b,ans;
a=stack[top];
stack[top]='\0';
top--;
b=stack[top];
stack[top]='\0';
stack[top];
top--;
switch(c)
{
case '+':ans=b+a;break;
case '-':ans=b-a;break;
case '*':ans=b*a;break;
case '/':ans=b/a;break;
case '^':pow(b,a);break;
default:ans=0;
}
top++;
stack[top]=ans;
}
