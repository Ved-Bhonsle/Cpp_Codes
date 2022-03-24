#include <iostream>
using namespace std;

template <typename T>
class A
{
	public:
		void func(const T &x)
		{
			static int i = 10;
			cout << ++i << endl;
			return;
		}
};

int main()
{
	A<int>obj1;
	A<float>obj2;

	obj1.func(1);
	obj1.func(2);

	obj2.func(10.2);

	return 0;
}
