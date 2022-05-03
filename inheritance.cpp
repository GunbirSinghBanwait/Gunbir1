#include<iostream>
using namespace std;
class Demo1
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
        cout<<"res of Demo1= "<<res;
    }
};

class Demo2
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
        cout<<"res of Demo1="<<res;
    }
};

class Demo3:public Demo1,public Demo2
{

};


int main()
{
    Demo3 d3;
    d3.sum();

}
