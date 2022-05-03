#include<iostream>
using namespace std;
class weight
{
private:
    int kg;
public:
    weight()
    {
    kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void printweight()
    {
        cout<<"Weight in KG:"<<kg<<endl;
    }

    void operator ++()
    {
        ++kg;
    }


    void operator ++(int)//int just to differentiate pre and post inc operator
    {
        kg++;
    }

    void operator --()
    {
        --kg;
    }


    void operator --(int)//int just to differentiate pre and post inc operator
    {
        kg--;
    }


};

int main()
{
   weight obj;
   obj.printweight();
   ++obj;
   obj.printweight();
   obj++;
   obj.printweight();
   --obj;
   obj.printweight();
   obj--;
   obj.printweight();
}
