// Overloading new and delete operator using global 

#include <iostream>
#include <stdlib.h>
using namespace std;

class location;

void * operator new(size_t byte)
{
	void *ptr;
	ptr = malloc(byte);
	cout << "Inside overloaded new operator" << endl;
	if(ptr == NULL)
	{
		cout << "Memory not allocated" << endl;
		exit(0);
	}
	return ptr;
}

void operator delete(void *ptr)
{
	cout << "Inside overloaded delete operator" << endl;
	free(ptr);
}

class location
{
	int lon,lat;
	public:
		location()
		{
			cout << "Inside default constructor" << endl;
			lon = 10,
			lat = 13;
		}

		location(int x,int y)
		{
			cout << "Inside parameterized constructor" << endl;
			lon = x;
			lat = y;
		}

		void display()
		{
			cout << "Location coordinates: Latitude:" << lat << " Longitude:" << lon << endl;
		}

		friend void * operator new(size_t byte);  // overloading new operator
		friend void operator delete(void *ptr); // overloading new operator
};

int main()
{
	location l1,l2(20,34);
	l1.display();
	l2.display();
	cout << endl;

	location *l3 = new location;
	l3->display();
	location *l4 = new location(2,3);
	l4->display();
	cout << endl;

	delete(l3);
	delete(l4);
	
	return 0;
}
