#include <iostream>
using namespace std;

class base
{
int x;
public:
base()
{
cout << "Base default constructor" << endl;
}
~base()
{
cout << "Base default destructor" << endl;
}
};

class derived : public base
{
int y;
public:
derived() { cout << "Derived default constructor" << endl; }
derived(int i) { cout << "Derived parameterized constructor" << endl; }
~derived() { cout << "Derived default destructor" << endl; }
//~derived(int i) { cout << "Derived default destructor" << endl; }
};

int main()
{
base b;
derived d1;
derived d2(10);
return 0;
}
