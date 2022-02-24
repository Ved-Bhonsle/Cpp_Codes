// This code demonstrates usage of unary operator overloading using friend operator

#include <iostream>
using namespace std;

class space
{
	public:
		int x,y,z;
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

		friend space operator -(space obj);
};

space operator -(space obj)
{
	space temp;
	temp.x = -obj.x;	
	temp.y = -obj.y;
	temp.z = -obj.z;
	return temp;
}

int main()
{
	space s1(5,3,2),s2;

	s1.display();
	s2 = -s1;
	s2.display();

	return 0;
}
