#include<iostream>
using namespace std;
int swap(int a,int b);
int main()
{
 swap(int, int);
}

int swap(int a,int b)
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int temp;
    cout<<"before swaping"<<" ";
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<a<<b;
}
