#include <iostream>
using namespace std;

void Demo() throw(int, double)
{
	int a = 1;
	if(a == 1) { throw a; }
	else if(a == 2) { throw 'A'; }
	else if(a == 3) { throw 4.5; }
}

int main()
{
	try { Demo(); }
	catch(int n)
	{
		cout << "Exception int caught\n";
	}
	catch(double n)
	{
		cout << "Exception double caught\n";
	}
	cout << "End of process\n";

	return 0;
}
