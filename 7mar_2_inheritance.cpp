
#include <iostream>
using namespace std;

class Person
{
	public:
		int a1 = 10;
		void func1()
		{
			cout << "A1:" << a1++ << " A1:" << a1 << endl; 
		}

	protected:
		int a2 = 20;
		void func2()
		{
			cout << "A2:" << a2-- << " A2:" << a2 << endl; 
		}

	private:
		int a3 = 30;
		void func3()
		{
			cout << "A3:" << a3++ << " A3:" << a3 << endl; 
		}
};

class doctor1: public Person
{
public:
int b1 = 10;
void func4()
{
cout << "For doctor1, b1:" << b1++ << "b1:" << b1 << endl;
}
};

class doctor2: private Person
{
int b2 = 20;
void func5()
{
cout << "For doctor1, b2:" << b2++ << " b1:" << b2 << endl;
}
};

class doctor3: protected Person
{
int b3 = 40;
void func5()
{
cout << "For doctor1, b3:" << b3++ << " b3:" << b3 << endl;
}
};

int main()
{
doctor1 d1;
doctor2 d2;
doctor3 d3;

d1.func4();
d1.func1();

d2.func5();
d2.func1();
d2.func2();

d3.func5();
d3.func2();
d3.func2();

return 0;
}
