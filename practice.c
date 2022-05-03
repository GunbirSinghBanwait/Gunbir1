#include<stdio.h>
int arr[10];
int pos=-1;
int i;
void main()
{
    int choice=0,i;

for(i=0;i<5;i++){


  printf("\n enter choice");
  scanf("%d",&choice);

do{
  if (choice==1)
  {
      insert();
       break;
  }
  else if(choice==2)
  {

      display();
       break;
  }

  else if(choice==3)
  {

      delete();
       break;
  }

  else if(choice==4)
  {

      search();
       break;
  }


}
  while(1);{

  }

}
}



    void insert(int value)
    {
    printf("insert is called");
        if (pos<9)
        {
         pos++;
         arr[pos]=value;
        }
    }


    void display()
    {
        printf("display is called");
        int j;
    for(j=0;j<=pos;j++)
    {

        printf("%d", arr[j]);
    }

    }


    void delete()
    {
        printf("delete is called");
        if (pos>=0)
        {
        pos--;
        }

        else
        {
        printf("stack is empty");}

        }


    void search(int num)
    {
        printf("search is called");
         int flag=0;
    int j;
    for(j=0;j<=pos;j++)
        if(arr[j]==num)
    {
        printf("%d \n value at index", j);
        flag=1;
        break;
    }

    if(flag==0)
    {
        printf("%d not found ",num);
    }

    }

