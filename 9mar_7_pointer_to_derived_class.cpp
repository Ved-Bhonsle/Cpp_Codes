// 
#include <iostream>
using namespace std;

class base1
{
	public:
		int i;
		base1() 
		{ 
			i = 10;
		}
};


class derived: public base1
{
	public:
		int j;
		derived(int x)
		{
			j = x;
		}
};

int main()
{
base1 b1(),*ptr;
derived d(20);

//ptr = &d;
((derived *)ptr)

cout << "i:" << ptr->i << endl;
cout << "j:" << ptr->j << endl; 

return 0;
}
