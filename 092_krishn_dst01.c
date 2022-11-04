#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

int st[10],top=-1,item;


void push()
{
if(top==STACK_SIZE)
printf("stack overflow\n");
else
{
printf("enter the element to be inserted\n");
scanf("%d",&item);
top++;
st[top]=item;
}
}
int pop()
{
int del_item;
if (top==-1)
printf("Stack underflow\n");
else
{
del_item=st[top];
top--;
return del_item;
}
}
void display()
{
int i;
if (top==-1)
printf("stack is empty\n");
for(i=0;i<=top;i++)
{
printf("%d\n",st[i]);
}
}

void main()
{
int n,i;
while(1)
{
    printf("choose from the following\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:push();
             break;
        case 2:i=pop();
            printf("item being deleted is %d\n",i);
             break;
        case 3:display();
             break;
        case 4:exit(0);
        default:printf("enter correct option number\n");
             break;
    }
}
}