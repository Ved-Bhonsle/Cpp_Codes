//Member function calling other member functions //

/*

mul\sub	   |	Public		Private		Protected
-----------|--------------------------------------------------
Public	   |	Output		Error		Error
	   |
Protected  |	Output		Error		Error
	   |
Protected  |	Output		Error		Error

*/

#include <iostream>
using namespace std;

/*
//Both functions are protected
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	protected:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
		mul();
	}

	protected:
	void mul()
	{
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
//Both functions are public
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}

	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
		mul();
	}

	void mul()
	{
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};

*/

/*
//Both functions are private
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	private:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
		mul();
	}

	void mul()
	{
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	private:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
		mul();
	}

	protected:
	void mul()
	{
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	private:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
		mul();
	}

	public:
	void mul()
	{
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	protected:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
		mul();
	}

	public:
	void mul()
	{
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	public:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
	}

	private:
	void mul()
	{
		sub();
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	public:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
	}

	protected:
	void mul()
	{
		sub();
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

/*
class calc
{
	public:
	int in1,in2;

	void setInput(int a, int b)
	{
		in1 = a;
		in2 = b;
	}
	protected:
	void  sub()
	{
		cout << "Difference between " << in1 << " and " << in2 << " is " << (in1 - in2) << endl;
	}

	private:
	void mul()
	{
		sub();
		cout << "Product of " << in1 << " and " << in2 << " is " << (in1*in2) << endl;
	}
	
};
*/

int main()
{
int num1,num2;
calc obj1;

cout << "Enter numbers:" << endl;
cin >> num1 >> num2;

obj1.setInput(num1,num2);

obj1.sub();

return 0;
}
