#include <iostream>
using namespace std;

class test
{
	int x;
	public:
		void read()
		{
			cout << "Enter number:";
			cin >> x;
		}

	class even{}; //abstract class for exceptions  -----> to be declared within the primary class itself.
	class odd{};
	
	void check()
	{
		if(x%2 == 0)
		{
			throw even(); // raise exceptions
		}
		else
		{
			throw odd();  // raise exceptions
		}
	}
};

int main()
{
	test t1;
	t1.read();

	try { t1.check(); }

	catch(test::even){ cout << "Number is even" << endl; }
	catch(test::odd) { cout << "Number is odd" << endl; }

	return 0;
}

