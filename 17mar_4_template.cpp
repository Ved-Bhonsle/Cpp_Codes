//template swapping of two numbers

#include <iostream>
using namespace std;

template <typename T,typename U>
void swap1 (T *t, U *u)
{
    	T tmp;
	tmp = *t;
    	*t = static_cast<T>(*u);
    	*u = static_cast<U>(tmp);
}

int main()
{
	int A;
	float B;
	
	A = 10;
	B = 20.9;

	cout << "Before swapping: A=" << A << " B=" << B << endl;
	swap1(&A,&B);
	cout << "After swapping: A=" << A << " B=" << B << endl;

	return 0;
}
