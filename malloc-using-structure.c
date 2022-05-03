#include<stdio.h>
#include<stdlib.h>
struct student
    {
        char name[20];
        int rollno;
        float fees;
    };
void main()
{

    struct student *ptr;


    ptr=(struct student*)malloc(sizeof(struct student));

    printf("%s",ptr->name);
    printf("%d",ptr->rollno);
}
