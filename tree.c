#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct tree*node;
node insert(int,node T);
void inorder(node T);
void preorder(node T);
void postorder(node T);
struct tree
{
int data;
struct tree *right,*left;
}*root;
void main()
{
node T=NULL;
int ele,ch,i=0,n;
clrscr();
printf("\nenter the no of elements in the tree:");
scanf("%d",&n);
printf("\nthe elements are:\n");
while(i<n)
{
scanf("%d",&ele);
T=insert(ele,T);
i++;
}
printf("1.INORDER\t2.PREORDER\t3.POSTORDER\t4.EXIT\n");
do
{
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\ninorder traversal");
inorder(T);
break;
case 2:
printf("\npreorder traversal");
preorder(T);
break;
case 3:
printf("\npostorder traversal");
postorder(T);
break;
case 4:
exit(0);
}
}while(ch<4);
getch();
}
node insert(int X,node T)
{
struct tree *newnode;
newnode=(struct tree*)malloc(sizeof(struct tree));
if(T==NULL)
{
newnode->data=X;
newnode->left=NULL;
newnode->right=NULL;
T=newnode;
}
else
{
if(X<T->data)
T->left=insert(X,T->left);
else
T->right=insert(X,T->right);
}
return T;
}
void inorder(node T)
{
if(T!=NULL)
{
inorder(T->left);
printf("%d\t",T->data);
inorder(T->right);
}
}
void preorder(node T)
{
if(T!=NULL)
{
printf("%d\t",T->data);
preorder(T->left);
preorder(T->right);
}
}
void postorder(node T)
{
if(T!=NULL)
{
postorder(T->left);
postorder(T->right);
printf("%d\t",T->data);
}
}

