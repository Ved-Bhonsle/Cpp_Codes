// Hybrid Inheritance

#include <iostream>
using namespace std;

class Car
{
	public:
		void display1()
		{
			cout << "I am a Car" << endl;
		}
};

class electric: public Car
{
	public:
		void display2()
		{
			cout << "I am an Electric" << endl;
		}
};

class Fuel : public Car 
{
	public:
		void display3()
		{
			cout << "I am an Fuel " << endl;
		}
};

class hybrid : public electric, public Fuel
{
public:
void display4()
{
cout << "I am a hybrid car" << endl;
}
};

int main()
{
electric e;
Fuel f;
hybrid h;

h.display1();
	return 0;
}
