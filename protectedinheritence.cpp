
#include<iostream>
using namespace std;
class Demo1
{
int num1;
int num2;
int res;

protected:
    void sum()
    {
        cout<<"enter num1= ";
        cin>>num1;
        cout<<"enter num2= ";
        cin>>num2;
        res=num1+num2;
        cout<<"res of Demo1= "<<res;
    }
};

class Demo2:public Demo1
{
int num1;
int num2;
int res;

public:
    void sum()
    {
        cout<<"enter num1= ";
        cin>>num1;
        cout<<"enter num2= ";
        cin>>num2;
        res=num1+num2;
        cout<<"res of Demo2="<<res;
    }
};



int main()
{
    Demo2 d3;
    d3.sum();

}
