// This code demonstrates usage of unary operator overloading

#include <iostream>
using namespace std;

class space
{
	int x,y,z;
	public:
		space()
		{
			x = y = z = 1;
		}

		space(int a,int b,int c)
		{
			x = a;
			y = b;
			z = c;
		}
		void display()
		{
			cout << "x:" << x << " y:" << y << " z:" << z << endl;
		}

		void operator-();
		void operator --();
};

void space::operator -()
{
	x = -x;
	y = -y;
	z = -z;
}

void space::operator --()
{
	x--;
	y--;
	z--;
}

int main()
{
	space s1(5,3,2),s2;

	s1.display();
	s2.display();
	-s1;
	s1.display();
	--s2;
	s2.display();

	return 0;
}

