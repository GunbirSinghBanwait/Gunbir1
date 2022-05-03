#include<iostream>
using namespace std;
int arr[10],i=-1;

void add(int value)
{
    if (i<10)
    {
        i++;
        arr[i]==value;
    }
     else
     {
         cout<<"array is full";
     }


}


void search(int num)
{
    for (i=0;i<10;i++)
        if(num==arr[i])
    {
        cout<<"found at location"<<i+1;
        break;
    }
    if (i=10)
    {
        cout<<"not found";
    }


int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);

    search(3)
}
