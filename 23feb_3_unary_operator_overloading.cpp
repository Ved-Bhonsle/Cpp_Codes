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
	cout << "Post Increment " << endl;
	cout << "x:"<< x++ << " x: " << x << endl;
	cout << "y:"<< y++ << " y: " << y << endl;
	cout << "z:"<< z++ << " z: " << z << endl << endl;
	//y++;
	//z++;
}

void space::operator ++(int)
{
	cout << "Pre Increment " << endl;
	cout << "x:"<< ++x << " x: " << x << endl;
	cout << "y:"<< ++y << " y: " << y << endl;
	cout << "z:"<< ++z << " z: " << z << endl;

	//++x;
	//++y;
	//++z;
}

int main()
{
	space s1(5,3,2),s2;

	++s1;
	s1++;

	return 0;
}

