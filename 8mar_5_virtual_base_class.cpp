#include <iostream>
using namespace std;

class A
{
	public:
		int i;
};

class B : virtual public A
{
	public:
		int j;
};

class C : public virtual A
{
	public:
		int k;
};

class D : public B, public C
{
	public:
		int sum;
};

int main()
{
	D d1;

	d1.i = 10;
	d1.j = 10;
	d1.k = 10;

	d1.sum = d1.i + d1.k + d1.j;
	cout << d1.sum << endl;

	return 0;
}
