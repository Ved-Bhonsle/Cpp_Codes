// This code demonstrates usage of static functions

#include <iostream>
using namespace std;

class A
{
static int count;  // Static members declared outside the class
int Count = 0;
public:
static void getCount()
{
cout << "Static count:" << ++count << endl;
//cout << "count:" << ++Count << endl;
}
};

int A::count; // Static members defined outside the class


int main()
{
A obj1,obj2,obj3;

A::getCount();
A::getCount();
A::getCount();

return 0;
}

