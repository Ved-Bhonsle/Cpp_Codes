// This code demonstrates usage of friend function

#include <iostream>
using namespace std;

class B; // forward declaration
class A
{
	int numA;
	public:
		void setA(int n);
		friend void add(A obj1, B obj2);
};
void A::setA(int n) { numA = n; }

class B
{
	int numB;
	public:
		void setB(int n);
		friend void add(A obj1,B obj2);
};
void B::setB(int n) { numB = n; }

void add(A obj1,B obj2)
{
cout << "Sum of " << obj1.numA << " and " << obj2.numB << " is " << obj1.numA+obj2.numB << endl;
}

int main()
{
int num1,num2;
A obj1;
B obj2;

cout << "Enter two numbers:";
cin >> num1 >> num2;
obj1.setA(num1);
obj2.setB(num2);

add(obj1,obj2);

return 0;
}
