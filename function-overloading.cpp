#include<iostream>
using namespace std;
class Maths
{
    int num1,num2,num3,res;
public:
    void sum()
    {
    cout<<"enter 2 numbers";
    cin>>num1>>num2;
    cout<<"\nSum()="<<res;
}

void sum(float x,float y)
{
    float ans;
    ans=x+y;
    cout<<"\n Sum(x,y)="<<ans;
}
};


int main()
{
    Maths mt;
    mt.sum();
    mt.sum(10,20);
    mt.sum(10.2,20.1);
}
