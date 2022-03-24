//template addition of two different datatypes

#include <iostream>
using namespace std;

template <typename T,typename U>
T sum(T n1,U n2)
{
	T rs;
	rs = n1 + n2;
	return rs;
}

int main()
{
	int A = 10, B = 20;
	long a = 11,b = 22;
	float c = 12.22, d = 15.33;

	cout << "Two Intergers:" << sum(A,B) << endl << "Two longs:" << sum(a,b) << endl << "Int and long:" << sum(A,b) << endl << "Long and Int:" << sum(a,B) << endl;

	return 0;
}
