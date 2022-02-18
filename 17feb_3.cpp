#include <iostream>
using namespace std;

class Dist
{
	public:

	int feet,inch;

	Dist(int f,int i)
	{
		feet = f;
		inch = i;
		cout << "Feet: " << feet << " Inches: " << inch << endl;
	}
Dist(Dist &c)
{
feet = c.feet;
inch = c.inch;
cout << "Copy Constructer called" << endl;
cout << "Feet: " << feet << " Inches: " << inch << endl;
}

	~Dist()
	{
		cout << "Destractor called" << endl;
	}
};

int main()
{
	int f,i;

	cout << "Enter feets and inches:" << endl;
	cin >> f >> i;
	Dist d1(f,i);
	Dist d2(d1);

	return 0;
}
