#include <iostream>
using namespace std;

template <typename T>
void func(const T &x)
{
	static int i = 10;
	cout << ++i << endl;
	return;
}

int main()
{
	func<int>(1);       // this is same function call as int function call below different function call from float function call below 
	func<int>(2); 	    // this is same function call as int function call above different function call from float function call below 

	func<double>(10.1); // this is different function call from int function call above

	return 0;
}
