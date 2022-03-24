#include <iostream>
using namespace std;

namespace CounterNamespace
{
	int upperbound;
	int lowerbound;

	class counter
	{
		int count;
		public:
		counter(int n)
		{
			if(n <= upperbound) 
				count = n;
			else 
				count = upperbound;
		}// end counter

		void reset(int n)
		{
			if(n <= upperbound) 
				count = n;
		}// end reset

		int run()
		{
			if(count > lowerbound)  
				return count--; 
			else 
				return lowerbound; 
		} // end run
	}; // end class
} // end namespace

int main()
{
	CounterNamespace::upperbound = 100;
	CounterNamespace::lowerbound = 0;
	CounterNamespace::counter obj1(10);

	int i;

	do
	{
		i = obj1.run(); 
		cout << i << " ";
	}while(i > CounterNamespace::lowerbound);
	cout << endl;

	CounterNamespace::counter obj2(20);
	do
	{
		i = obj2.run(); 
		cout << i << " ";
	}while(i > CounterNamespace::lowerbound);
	cout << endl;
	obj2.reset(100);

	CounterNamespace::lowerbound = 90;
	do
	{
		i = obj2.run(); 
		cout << i << " ";
	}while(i > CounterNamespace::lowerbound);
	cout << endl;

	return 0;
}
