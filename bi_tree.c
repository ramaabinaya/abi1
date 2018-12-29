#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int flag,position=0,x;
typedef struct node *nodeptr;
struct node
{
int data;
nodeptr llink,rlink;
};
nodeptr root,temp,newptr;
void create();
void insert();
void insert1(nodeptr,int);
void del();
void del1(int,nodeptr,nodeptr,int);
void display();
void display1(nodeptr,int,int,int);
void main()
{
int choice;
printf("\n1.create\t2.insert\t3.delete\t4.display\t5.exit");
do
{
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:create();break;
case 2:insert();break;
case 3:del();break;
case 4:printf("the elements in the binery search tree are\n");display();break;
case 5:exit(0);
}
}while(choice<=5);
}
void create()
{
if(position==0)
{
root=(struct node*)malloc(sizeof(struct node));
printf("\nenter the root node:");
scanf("%d",&x);
root->data=x;
root->llink=NULL;
root->rlink=NULL;
position++;
}
else
printf("\nroot node already created");
}
void insert()
{
if(position>0)
{
newptr=(struct node*)malloc(sizeof(struct node));
printf("\nenter the element to be inserted:");
scanf("%d",&x);
newptr->data=x;
newptr->llink=NULL;
newptr->rlink=NULL;
insert1(root,x);
position++;
}
else
printf("\ncreate root node ");
}
void insert1(nodeptr temp,int x)
{
if(temp->data<x)
{
if(temp->rlink!=NULL)
insert1(temp->rlink,x);
else
temp->rlink=newptr;
}
else if(temp->data>x)
{
if(temp->llink!=NULL)
insert1(temp->llink,x);
else
temp->llink=newptr;
}
}
void del()
{
flag=0;
if(position==0)
printf("\n binary tree is empty ");
else
{
printf("\nenter the element to be deleted");
scanf("%d",&x);
del1(x,root,NULL,0);
}
}
void del1(int ele,nodeptr p,nodeptr pre,int id)
{
if(p->data<ele)
del1(ele,p->rlink,p,2);
if(p->data>ele)
del1(ele,p->llink,p,1);
else if(p->data==ele)
{
if((p->rlink==NULL)&&(p->llink==NULL))
{
if(id==1)
pre->llink=NULL;
else
pre->rlink=NULL;
free(p);
flag=1;
position--;
}
else if((p->rlink!=NULL)&&(p->llink!=NULL))
{
nodeptr qparent,q;
q=p->llink;
if(q->rlink==NULL)
{
q->rlink=p->rlink;
if(p!=root)
if(id==1)
pre->llink=q;
else
pre->rlink=q;
else
root=q;
free(p);
position--;
}
else{
while(q->rlink!=NULL)
{
qparent=q;
q=q->rlink;
}
q->rlink=p->rlink;
q->llink=p->llink;
if(p!=root)
if(id==1)
pre->llink=q;
else
pre->rlink=q;
else
root=q;
qparent->rlink=NULL;
free(p);
position--;
}
flag=1;
}
else if((p->rlink!=NULL)&&(p->llink==NULL))
{
p=p->rlink;
if(p!=root)
if(id==1)
pre->llink=p;
else
pre->rlink=p;
position--;
flag=1;
}
else if((p->rlink==NULL)&&(p->llink!=NULL))
{
p=p->llink;
if(p!=root)
if(id==1)
pre->llink=p;
else
pre->rlink=p;
position--;
flag=1;
}
return;
}
if(flag==0)
printf("\nelement not found");
}
void display()
{
if(position==0)
printf("\nbinary tree is empty");
else
{
clrscr();
display1(root,35,1,16);
}
}
void display1(nodeptr temp,int row,int column,int inc)
{
gotoxy(row,column);
printf("%d",temp->data);
if(temp->llink!=NULL)
display1(temp->llink,row-inc,column+4,inc/2);
if(temp->rlink!=NULL)
display1(temp->rlink,row+inc,column+4,inc/2);
gotoxy(0,10);
}


