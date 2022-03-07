// Hierarchical Inheritance

#include <iostream>
using namespace std;

class Liquid
{
	public:
		void display1()
		{
			cout << "I am a Liquid" << endl;
		}
};

class water: public Liquid
{
	public:
		void display2()
		{
			cout << "I am a Water " << endl;
		}
};

class petrol : public Liquid 
{
	public:
		void display2()
		{
			cout << "I am an Petrol " << endl;
		}
};

int main()
{
	petrol p1;
	water w1;

	p1.display1();
	p1.display2();

	w1.display1();
	w1.display2();

	return 0;
}
