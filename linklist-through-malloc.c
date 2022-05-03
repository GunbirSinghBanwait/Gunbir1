#include<stdio.h>
    struct node
    {
        int data;
        struct node *link;
    };
    int main()
    {

        struct node *n1,*n2,*n3,*n4;
        struct node *start,*ptr;
        n1=(struct node*)malloc(sizeof(struct node));
        n2=(struct node*)malloc(sizeof(struct node));
        n3=(struct node*)malloc(sizeof(struct node));
        n4=(struct node*)malloc(sizeof(struct node));

        start=n1;
        ptr=start;

        n1->data=10;
        n1->link=&n2;

        n2->data=20;
        n2->link=&n3;

         n3->data=30;
         n3->link=&n4;

         n4->data=40;
         n4->link=NULL;

         for(int i=0;i<5;i++)
         {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
         }


    };
