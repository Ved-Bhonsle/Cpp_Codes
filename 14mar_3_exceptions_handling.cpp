#include <iostream>
using namespace std;

void Test(int test)
{
	cout << "Inside Test,test is:" << test << endl;
	if(test) { throw test; }
}

int main()
{
	cout << "Start\n";

	try {
		cout << "Inside try block\n";
		Test(0);
		Test(1);
		Test(2);
	}

	catch(int i)
	{
		cout << "Caught an exception--value is:";
		cout << i << endl;
	}
	cout << "End" << endl;

	return 0;
}
