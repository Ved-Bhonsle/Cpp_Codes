//template swapping of two numbers

#include <iostream>
using namespace std;

template <typename T,typename U>
T swap(T *a,U *b)
{
	T c;
c = *a;
*a = *b;
*b = c;
}

int main()
{
	int A;
	float B;
	string str1 = "abc",str2 = "xyz";

	A = 10;
	B = 20;

	cout << "Before swapping: str1=" << str1 << " str2=" << str2 << endl;
	swap(str1,str2);
	cout << "After swapping: str1=" << str1 << " str2=" << str2 << endl;

	return 0;
}
