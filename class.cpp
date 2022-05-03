#include<iostream>
using namespace std;
class student
{
    char name[50];
    int roll;
    float marks;
public:
    int input()
    {
        cout<<"enter name:";
        cin>>name;

        cout<<"enter rollno:";
        cin>>roll;

        cout<<"enter marks:";
        cin>>marks;

        cout<<"name is:"<<name<<endl;
        cout<<"rollno is:"<<roll<<endl;
        cout<<"marks is:"<<marks<<endl;
    }
};

int main()
{
    student st;
    st.input();

}
