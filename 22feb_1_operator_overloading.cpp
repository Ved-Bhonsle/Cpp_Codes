// This code demonstrates usage of operator overloading

#include <iostream>
using namespace std;

class complex
{
	int real,imag;

	public:
		complex() // Default copy constrctor 
		{
			real = 0;
			imag = 0;
		}

		complex(int r,int i) // Parameterized constructor
		{
			real = r;
			imag = i;
		}

		void Display() // display the 'real+i(imaginary)' number
		{ cout << "Real part: " << real << " Imaginary part: " << imag << endl; }

		// Make a operator overloading=>   return-type operator op-symbol(arguments)
		complex operator +(complex obj) // overloading + operator
		{
			complex temp;
			temp.real = real + obj.real;
			temp.imag = imag + obj.imag;
			return temp;
		}

		complex operator -(complex obj) // overloading - operator
		{
			complex temp;
			temp.real = real - obj.real;
			temp.imag = imag - obj.imag;
			return temp;
		}

		complex operator *(complex obj) // overloading * operator
		{
			complex temp;
			temp.real = real * obj.real;
			temp.imag = imag * obj.imag;
			return temp;
		}

		complex operator /(complex obj) // overloading / operator
		{
			complex temp;
			temp.real = real / obj.real;
			temp.imag = imag / obj.imag;
			return temp;
		}
};

int main()
{
	complex c1(10,20);
	c1.Display();

	complex c2(2,5);
	c2.Display();

	complex c3;
	c3.Display();

	complex c4;
	cout << endl << "Overloading + operator" << endl;
	c4 = c1 + c2;  // This is one way of using overloaded operator
	c4.Display();

	complex c5;
	c5 = c4.operator + (c2); // Another way of using overloaded operator
	c5.Display();

	c4 = c1 - c2;  
	cout << endl <<"Overloading - operator" << endl;
	c4.Display();

	c4 = c1 * c2;  
	cout << endl << "Overloading * operator" << endl;
	c4.Display();

	c4 = c1/c2;  
	cout << endl << "Overloading / operator" << endl;
	c4.Display();

	return 0;
}
