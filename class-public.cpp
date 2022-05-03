#include<iostream>
using namespace std;
class MATHS
{
    private:
    int num1=10;
    int num2=20;
    int res;
    public:
        void sum()
        {
            res=num1+num2;
            cout<<"the res is="<<res;
        }


        void sub()
        {
            res=num2-num1;
            cout<<"the res is="<<res;
        }



};

int main()
{
    MATHS mt;

    mt.sum();
    mt.sub();1




}


