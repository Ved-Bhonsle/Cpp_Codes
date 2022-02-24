// This code demonstrates usage of new 

#include <iostream>
using namespace std;

int main()
{
int *p = new int;
*p = 55;
cout << "Value:" << *p << endl;
cout << "Address of value:" << p << endl;
cout << "Address of pointer:" << &p << endl;
cout << "Size of Variable:" << sizeof(*p) << endl;
cout << "Size of pointer:" << sizeof(p) << endl;
return 0;
}
