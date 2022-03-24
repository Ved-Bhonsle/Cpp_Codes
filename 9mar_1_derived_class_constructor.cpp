// Passing values to parameterized constructor from child class to parent class

#include <iostream>
using namespace std;

class base1
{
	protected:
	int i;
	public:
		base1(int x) 
		{ 
			i = x;
			cout << "Constructing base1\n" << endl;
		}
		~base1()
		{
			cout << "Destructor base1\n" << endl;
		}
};

class base2
{
	protected:
		int k;
	public:
		base2(int a) 
		{ 
		k = a;
			cout << "Constructing base2\n" << endl;
		}
		~base2()
		{
			cout << "Destructor base2\n" << endl;
		}
};

class derived: public base1, public base2
{
	int j;
	public:
		derived(int x,int y,int z): base1(y), base2(z) // passing variables to parameterized constructor of parent class
		{
			j = x;
			cout << "Constructing derived\n" << endl;
		}
		~derived()
		{
			cout << "Destructing derived\n" << endl;
		}
		void show()
		{
			cout << i << " " << j << " " << k << endl;
		}
};

int main()
{
derived d1(10,20,30);
d1.show();
return 0;
}
