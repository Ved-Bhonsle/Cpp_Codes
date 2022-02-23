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
		complex operator %(complex obj) // overloading % operator
		{
			complex temp;
			temp.real = real % obj.real;
			temp.imag = imag % obj.imag;
			return temp;
		}
		complex operator ^(complex obj) // overloading ^ operator
		{
			complex temp;
			temp.real = 1;
			temp.imag = 1;
			for(int i = 0;i<obj.real;i++) { temp.real *= real; }
			for(int j = 0;j<obj.imag;j++) { temp.imag *= imag; }
			return temp;
		}
		complex operator +=(complex obj) // overloading += operator
		{
			complex temp;
			temp.real = obj.real + real + 10;
			temp.imag = obj.imag + imag + 10;
			return temp;
		}
		friend complex operator -=(complex obj1,complex obj2);
		friend complex operator *=(complex obj1,complex obj2);
		friend complex operator /=(complex obj1,complex obj2);
};

complex operator -=(complex obj1,complex obj2)  // we can pass multiple objects in friend operator overloading, unlike member operator overloading which accepts only one object
{
	complex temp;
	temp.real = obj2.real - obj1.real - 10;
	temp.imag = obj2.imag - obj1.imag - 10;
	return temp;
}

complex operator *=(complex obj1,complex obj2)  // we can pass multiple objects in friend operator overloading, unlike member operator overloading which accepts only one object
{
	complex temp;
	temp.real = obj2.real * obj1.real * 10;
	temp.imag = obj2.imag * obj1.imag * 10;
	return temp;
}

complex operator /=(complex obj1,complex obj2)  // we can pass multiple objects in friend operator overloading, unlike member operator overloading which accepts only one object
{
	complex temp;
	temp.real = (obj2.real/obj1.real)/10;
	temp.imag = (obj2.imag/obj1.imag)/10;
	return temp;
}


int main()
{
char choice;
	complex c1(10,20),c2(2,5),c3;
	c1.Display();
	c2.Display();
	cout << endl;
	//c3.Display();

	cout << "+ => Addition" << endl << "- => Subtraction" << endl << "* => Multiplication" << endl << "/ => Division" << endl << "% => Modulo division" << endl << "^ => Raise to" << endl << "a => += => Incrementation" << endl << "b => -= => Decrementation" << endl << "c => *= => Multiplication Incrementation" << endl << "d => /= => Division Decrementation" << endl << endl << "Enter operator:" << endl;

	cin >>  choice;

	switch (choice)
	{
		case '+':
		{
			cout << endl << "Overloading + operator" << endl;
			c3 = c1 + c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case '-':
		{
			cout << endl << "Overloading - operator" << endl;
			c3 = c1 - c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case '*':
		{
			cout << endl << "Overloading * operator" << endl;
			c3 = c1*c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case '/':
		{
			cout << endl << "Overloading / operator" << endl;
			c3 = c1/c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case '%':
		{
			cout << endl << "Overloading % operator" << endl;
			c3 = c1%c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case '^':
		{
			cout << endl << "Overloading ^ operator" << endl;
			c3 = c1^c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case 'a':
		{
			cout << endl << "Overloading += operator" << endl;
			c3 = c1+=c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case 'b':
		{
			cout << endl << "Overloading -= operator" << endl;
			c3 = c1-=c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case 'c':
		{
			cout << endl << "Overloading *= operator" << endl;
			c3 = c1*=c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		case 'd':
		{
			cout << endl << "Overloading /= operator" << endl;
			c3 = c1/=c2;  // This is one way of using overloaded operator
			c3.Display();
			break;
		}
		default:
		{
			cout << "Enter valid operator" << endl;
			break;
		}
	}

	return 0;
}
