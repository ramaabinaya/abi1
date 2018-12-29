#include<stdio.h>
#include<conio.h>
int queue[20],max,front=0,rear=0;
void enqueue(void);
void dequeue(void);
void display(void);
void main()
{
int ch;
printf("\nenter the size of queue[max=20]:");
scanf("%d",&max);
do
{
printf("\n*****MENU*****");
printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit");
printf("\nenter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();break;
case 2:dequeue();break;
case 3:display();break;
case 4:printf("\n\texit point");break;
default:printf("\n\tplease enter the valid choice(1/2/3/4)");
}
}while(1);
}
void enqueue()
{
int element;
if(rear==max)
printf("\n\tqueue is overflow");
else
{
printf("enter elemene:");
scanf("%d",&element);
queue[rear++]=element;
}
}
void dequeue()
{
if(rear==front)
printf("\nunderflow!!");
else
{
printf("\ndequeued element %d",queue[front]);
front++;
printf("\nelement is dequeued from %d",front);

}
}
void display()
{
int i;
if(front==rear)
printf("\nqueue is empty!!");
else
{
printf("\n");
for(i=front;i<rear;i++)
printf("%d\t",queue[i]);
}
}

