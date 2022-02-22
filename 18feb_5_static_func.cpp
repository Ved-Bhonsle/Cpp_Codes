// This code demonstrates usage of static data variables

#include <iostream>
using namespace std;

class A
{
static int count;  // Static members declared outside the class
int Count = 0;
public:
void getCount()
{
cout << "Static count:" << ++count << endl;
cout << "count:" << ++Count << endl;
}
};

int A::count; // Static members defined outside the class


int main()
{
A obj1,obj2,obj3;

obj1.getCount();
obj2.getCount();
obj3.getCount();

return 0;
}

