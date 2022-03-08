// 

#include <iostream>
using namespace std;

class A
{
	protected:
		int b = 30;
		void display1()
		{
			cout << a << endl;
		}
	private:
		int c = 20;
		void display2()
		{
			cout << b << endl;
		}
	public:
		int a  = 10;
		void display3()
		{
			cout << a << endl;
		}
};

class B: public A
{

};

class C : public A 
{
	public:
		void display4()
		{
			display3();
		}
};

class D : public B, public C
{

};

int main()
{
	D d1;

	//d1.display3(); ------> This is illegal
	//d1.B::display3(); -----> This is legal
	d1.display4(); // --------> This is legal

	return 0;
}
