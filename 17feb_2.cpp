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

	return 0;
}
