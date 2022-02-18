// swap two functions using call by reffernce and pointer

#include <iostream>
using namespace std;
/*
class swap
{
	private: 
		int a,b;

	public:

		void setInput(int num1, int num2)
		{
			a = num1;
			b = num2;
		}

		void using_pointer(int *a, int *b)
		{
			int temp;
			cout << "Before a:" << *a << " b:" << *b << endl;
			temp = *a;
			*a = *b;
			*b = temp;
			cout << "After a:" << *a << " b:" << *b << endl;
		}



};
*/
void using_value(int a, int b)
{
	int temp;
	cout << "Using call by value" << endl ;
	cout << "Before a:" << a << " b:" << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "After a:" << a << " b:" << b << endl;
}

void using_pointer(int *a, int *b)
{
	int temp;
	cout << endl << "Using call by refference" << endl ;
	cout << "Before a:" << *a << " b:" << *b << endl;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "After a:" << *a << " b:" << *b << endl;
}

int main()
{
	int a = 10, b = 20;
	//swap obj1;
	//obj1.setInput(10,20);
	using_value(a,b);
	using_pointer(&a,&b);

	return 0;
}
