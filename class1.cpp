#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class student
{	int rollno;
	char name[20];
	public:
	void input()
	{
	cin>>rollno>>name;
	}

	void output()
	{

	cout<<rollno<<name;
	}
};
int main()
{
	student s1;
	s1.input();
	s1.output();
	return 0;
}
