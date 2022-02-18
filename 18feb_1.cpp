#include <iostream>
using namespace std;

class A{
private:
int i = 10;
public:
A()
{
cout << "Inside constructor" << endl << endl;
}

A (A &obj)
{
cout << "Inside copy constructor" << endl << endl;
}

void func( A obj1, A obj2)
{
cout << "Inside func() function" << endl << endl;
}


};

int main()
{
A obj1;
A obj2(obj2);
obj1.func(obj1,obj1);

return 0;
}
