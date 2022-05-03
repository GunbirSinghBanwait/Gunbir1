#include <bits/stdc++.h>
using namespace std;
class Test
{
    public:
	int x;
};
int main()
{
	Test t;
	t.x = 20;
// compiler error because x is private

	return 0;
}
