#include <iostream>
#include <exception>
using namespace std;

int main()
{
	try
	{
		int *myarray = new int[1000000000000]; // NO need to throw seperately, we are using the library
		for(int i = 11; i<10; i++) {} 
	}

	catch(exception &e)
	{
		cout << "Std Exception: " << e.what() << endl; 
	}

	return 0;
}
