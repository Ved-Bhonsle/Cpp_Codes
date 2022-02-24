// This code demonstrates usage of unary operator overloading for postfix and prefix operators

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

		void operator ++();
		void operator ++(int);
};

void space::operator ++()
{
	x++;	
	y++;
	z++;
	cout << "Post Increment " << endl << "x:" << x << " y:" << y << " z:" << z << endl;
}

void space::operator ++(int)
{
	++x;
	++y;
	++z;
	cout << "Pre Increment " << endl << "x:" << x << " y:" << y << " z:" << z << endl;
}

int main()
{
	space s1(5,3,2),s2;

	++s1;
	s1++;

	return 0;
}
