// This code demonstrates usage of operator overloading in friend functions

#include <iostream>
using namespace std;

class complex
{
	int real,imag;

	public:
		complex ()
		{
			real = 0;
			imag = 0;
		}

		complex(int r, int i)
		{
			real = r;
			imag = i;
		}

		void display()
		{
			cout << "Real: " << real << " Imaginary: " << imag << endl;
		}

		friend complex operator +(complex obj1,complex obj2);

};

complex operator +(complex obj1,complex obj2)  // we can pass multiple objects in friend operator overloading, unlike member operator overloading which accepts only one object
{
	complex temp;
	temp.real = obj2.real + obj1.real;
	temp.imag = obj2.imag + obj1.imag;
	return temp;
}

int main()
{
	complex c1(2,7),c2(1,2);
	complex c3;	
	c3 = c1 + c2;
	c3.display();

	return 0;
}
