#include<iostream>
using namespace std;
class employee
{
    char name[10];
    float salary;
public:

    int vname()
    {
        cout<<"enter name"<<endl;


        cin>>name;
        cout<<"your name is"<<name<<endl;
    }

    int vsalary()
    {
        cout<<"enter salary"<<endl;
        cin>>salary;
        cout<<"your salary is"<<salary<<endl;
    }


};

int main()
{
    employee em;
    em.vname();
    em.vsalary();
}
u
