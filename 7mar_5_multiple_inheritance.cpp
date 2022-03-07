// Multiple Inheritance

#include <iostream>
using namespace std;

class Liquid
{
	public:
		int l = 1;
		void display1()
		{
			cout << l << ":" << "I am a Liquid" << endl;
		}
};

class Fuel
{
	public:
		int s = 2;
		void display2()
		{
			cout << s << ":" << "I am a Fuel " << endl;
		}
};

class petrol : public Liquid, public Fuel 
{
	public:
		int p = 3;
		void display3()
		{
			cout << p << ":" << "I am an Petrol " << endl;
		}
};

int main()
{
	petrol p1;

	p1.display1();
	p1.display2();
	p1.display3();

	return 0;
}
