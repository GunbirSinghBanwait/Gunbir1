#include<stdio.h>
 int stack[10];
    int pos=-1;
void main()
{
    push(10);
    push(20);
    push(30);
    display();

    search(30);
    }
void push(int value)
    {
        if(pos<9)
        {
            pos++;
        stack[pos]=value;
    }
    else
    {
        printf("stack is full");
    }}
    void pop()
    {
        if(pos>=0)
            pos--;
        else
        {
            printf("stack is empty");
        }
    }
    void display()
    {
        for(int i=0;i<=pos;i++)
        printf("%d ",stack[i]);
    }

    void search(int num)
    {
        for(int i=0;i<=pos;i++)

            if (stack[i]==num)
        {
            printf("%d",i);
        }


    }





