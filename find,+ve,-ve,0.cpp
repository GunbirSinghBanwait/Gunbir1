#include<iostream>
using namespace std;
int main()
{
    int arr[10]={0,0,-1,-2,3,4,5,6,-7,4};
    int i;
    int positive=0;
    int negative=0;
    int zero=0;
    for (i=0;i<=10;i++)
    {
            if(arr[i]>0)
            positive++;
            else if(arr[i]<0)
            negative++;
            else
            zero++;
    }
    cout<<"the number is positive"<<endl<<positive;
    cout<<"the number is positive"<<endl<<negative;
    cout<<"the number is zero"<<endl<<zero;

    return 0;
}
