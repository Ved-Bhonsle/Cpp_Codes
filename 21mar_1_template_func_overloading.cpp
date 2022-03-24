#include <iostream>
using namespace std;

template <typename T1>
	void sum(T1 a, T1 b, T1 c)
	{
		cout << "Sum: " << a+b+c << endl;
	}

template <typename T1, typename T2>
	void sum(T1 a, T2 b, T1 c)
	{
		cout << "Sum: " << a+b+c << endl;
	}

	void sum(int a, int b)
	{
		cout << "Sum: " << a+b << endl;
	}

int main()
{
int x,y;
float a,b,c;

cout << "Enter two integers:" << endl;
cin >> x >> y;

cout << "Enter three doubles:" << endl;
cin >> a >> b >> c;

sum(a,b,c);
sum(a,b);
sum(x,a,y);

return 0;
}
