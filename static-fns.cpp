#include<iostream>
using namespace std;
class Test
{
   static int num;
public:
    void init()
    {
        num=11;
    }
    void show()
    {

        cout<<"value of class="<<num<<endl;
        num++;
    }


};int Test::num;

int main()
{
   Test t1,t2,t3;
   t1.init();
   t1.show();
   t2.show();
   t3.show();

}
