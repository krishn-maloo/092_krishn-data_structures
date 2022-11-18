#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

void push(int st[],int*top,int item)
{
if(*top==STACK_SIZE-1)
printf("stack overflow\n");
else
{
(*top)++;
st[*top]=item;
}
}
int pop(int st[],int*top)
{
int del_item;
if (*top==-1)
printf("Stack underflow\n");
else
{
del_item=st[*top];
(*top)--;
return del_item;
}
}
void display(int st[],int*top)
{
int i;
if (*top==-1)
printf("stack is empty\n");
for(i=0;i<=*top;i++)
{
printf("%d\n",st[i]);
}
}

void main()
{
int st[10];
int item;
int top=-1;
int n,i;
while(1)
{
    printf("choose from the following\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("enter the element you want to enter\n");
               scanf("%d",&item);
             push(st,&top,item);
             break;
        case 2:i=pop(st,&top);
            printf("item being deleted is %d\n",i);
             break;
        case 3:display(st,&top);
             break;
        case 4:exit(0);
        default:printf("enter correct option number\n");
             break;
    }
}
}