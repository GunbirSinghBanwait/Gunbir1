#include<iostream>
using namespace std;
void passByValue(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=100,b=200;
    cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
    passByValue(&a,&b);
    cout<<"after swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
}
