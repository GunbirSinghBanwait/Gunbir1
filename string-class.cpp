#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text;
    text="gunbir";

    text.push_back('S');
        text.push_back('I');
            text.push_back('N');
                text.push_back('G');
                    text.push_back('H');

    cout<<text<<endl;

    text.pop_back();

    cout<<text<<endl;

    cout<<text.substr(5)<<endl;

    cout<<text.find('S')<<endl ;

    cout<<text.length()<<endl;

    cout<<text[3]<<endl;




}
