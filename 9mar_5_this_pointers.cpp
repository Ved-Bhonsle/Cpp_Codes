#include <iostream>
using namespace std;

class sample
{
int a,b;
public:
void input(int a, int b)
{
this->a = a + b; // This pointer is used when local variables name is same as member's name
this->b = a - b;
}
void output()
{
cout << "a:" << a << "   b:" << b << endl;
}
};

int main()
{
sample s1;

s1.input(20,10);
s1.output();

//return 0;
}
