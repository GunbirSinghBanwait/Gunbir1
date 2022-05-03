#include<stdio.h>
struct node
{
 int data;
 struct node *next;


};
 int main()
 {
     struct node *n1,*n2,*n3,*n4;

     n1=(struct node*)malloc(sizeof(struct node));
     n2=(struct node*)malloc(sizeof(struct node));
     n3=(struct node*)malloc(sizeof(struct node));
     n4=(struct node*)malloc(sizeof(struct node));

     n1->data=10;
     n1->next=&n2;

     n2->data=20;
     n2->next=&n3;

     n3->data=30;
     n3->next=&n4;

     n4->data=40;
     n4->next=NULL;


     while (ptr-> next!=NULL)
 }

