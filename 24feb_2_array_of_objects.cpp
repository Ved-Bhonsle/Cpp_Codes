// This code demonstrates array of objects using new command

#include <iostream>
using namespace std;

class A
{
	public:
		int a,b;
		A()
		{
			a = 10;
			b = 20;
			cout << "Deafault constructor called" << endl;
		}

		A(int x,int y)
		{
			a = x;
			b = y;
			cout << "Paramneterized constructor called" << endl;
		}
		~A()
		{
			cout << "Destructor called" << endl;
		}
};

int main()
{
cout << "For array of objects" << endl;
A obj1[5]; // Creating an array of objects
cout << endl;

A obj5(1,2); 
cout << endl;

A *obj2,*obj3; // Creating an object pointer

cout << "For object pointers" << endl;
obj2 = new A [5]; // assigning array dynamically				WE
obj3 = new A;

cout  << endl << "Size of obj1:" << (sizeof(obj1)) << " Size of obj2:" << (sizeof(obj2)) << " Size of obj3:" << (sizeof(obj1)) << endl << endl;

//Deleting objects pointers
cout << "For array of object pointers" << endl;
delete [] obj2;

cout << endl << "For single object pointer" << endl;
delete obj3;

A *obj4; 
obj4 = (A*)malloc(sizeof(A));
cout << endl << "Size of obj4:" << (sizeof(obj4)) << endl << endl;
obj4 = NULL;

free(obj4);

return 0;
}
