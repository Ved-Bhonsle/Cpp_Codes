#include <iostream>
using namespace std;

class demo
{
	int i;
	public:
		demo(int x)
		{
			i = x;
		}
		int getdata()
		{
			return i;
		}
};

int main()
{
	demo d1[3] = {55,66,77},*ptr = d1;

	for(int i = 0;i<3;i++)
	{
		cout << ptr->getdata() << endl; // when using pointer to object use -> operator
		ptr++;
	}

	return 0;
}
