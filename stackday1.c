#include<stdio.h>
int stack[10];
int pos=-1;
void main()
{
push(10);
push(20);
push(30);
display();
search(40);
}

void push(int value)
{
    if (pos<9)
   {
    pos++;
    stack[pos]=value;
   }
}

void pop()
{
    if (pos>=0)
    {
    pos--;
    }

    else
    {printf("stack is empty");}
}



void display()
{
    int i;
    for(i=0;i<=pos;i++)
    {

        printf("%d", stack[i]);
    }

}

void search(int num)
{
    int flag=0;
    int i;
    for(i=0;i<=pos;i++)
        if(stack[i]==num)
    {
        printf("%d \n value at index", i);
        flag=1;
        break;
    }

    if(flag==0)
    {
        printf("%d not found ",num);
    }
}
