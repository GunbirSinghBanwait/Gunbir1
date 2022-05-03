#include<iostream>
using namespace std;
class ADmaths
{
private:
    int n1,n2;
    float res;
public:
    void getdata()
    {
        cout<<"enter 1st no.";
        cin>>n1;
        cout<<"enter 2nd no.";
        cin>>n2;
    }

    void divide()
    {
        res=n1/n2;
        cout<<"the divisibility is"<<res<<endl;
    }

    void multiply()
    {
        res=n1*n2;
        cout<<"the multiplication is"<<res<<endl;

    }
};

int main()
{
    ADmaths ad;
    ad.getdata();
    ad.divide();
    ad.multiply();
}
