#include<iostream>
using namespace std;
class Test
{
    int num;
public:
    Test()
    {
        cout<<"\n default constructor";
    }

    Test(int n)
    {
        num=n;
        cout<<"\n parameterised const";
    }

    Test (int n,int x)
    {
    }
int show()
{
    cout<<"\n show()";
}
~Test()
{
    cout<<"\n destructor";
}

};

int main()
{
    Test t1;
    Test t2(200);
    t1.show();
}
