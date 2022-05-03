#include<iostream>
using namespace std;
class Show
{
public:
void insert(){
cout<<"insert is called";
}
void display(){
cout<<"display is called";
}
void remove(){
cout<<"remove is called";
}
void search(){
cout<<"search is called";
}
void exit(){
cout<<"exit is called";
}
};
int main()
{
    int choice=0,i;
   Show s;

   for(i=0;i<5;i++)
   {
       cout<<"enter choice"<<endl;
        cin>>choice;

   do{
    if(choice==1)
    {
        s.insert();
        break;
    }
    else if(choice==2)
    {
        s.display();
        break;
    }
    else if(choice==3)
    {
        s.remove();
        break;
    }
    else if(choice==4)
    {
        s.search();
        break;
    }
    else if(choice==5)
    {
        s.exit();
        break;
    }
   }
   while(1);{
   }
   }
}
