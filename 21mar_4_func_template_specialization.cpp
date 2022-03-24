#include <iostream>
using namespace std;

template <typename T,typename U>
void swap1 (T &a, U &b)
{
    	T tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "Inside template swap\n";
}

void swap1(int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "Inside int specialization\n";
}

int main()
{
	int A,C;
	float B,D;

	A = 10;
	C = 20;
	
	B = 20.9;
	D = 21.2;

	cout << "Before swapping: A=" << A << " C=" << C << endl << endl;
	swap1(A,C);
	cout << "After swapping: A=" << A << " C=" << C << endl << endl;

	cout << "Before swapping: B=" << B << " D=" << D << endl << endl;
	swap1(B,D);
	cout << "After swapping: B=" << B << " D=" << D << endl << endl;

	return 0;
}
