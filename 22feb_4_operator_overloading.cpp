// This i

#include <iostream>
using namespace std;

class A;

class B
{
	int a , b;
	public:
		void setData(int x,int y)
		{
			a = x;
			b = y;
		}
		friend B operator +(A obj1,B obj2);
		friend void display(B obj);
};

class A
{
	public:
		int a, b;
		void setData(int x, int y)
		{
			a = x;
			b = y;
		}
		friend B operator +(A obj1,B obj2);
		friend void display(B obj);
};

B operator +(A obj1, B obj2)
{
B obj3;
obj3.a = obj1.a + obj2.a;
obj3.b = obj1.b + obj2.b;
return obj3;
}

void display(B obj3)
{
cout << "a:" << obj3.a << " b:" << obj3.b << endl;
}

int main()
{
A obj1;
B obj2,obj3;

obj1.setData(10,20);
obj2.setData(20,30);

obj3 = obj1 + obj2;
display(obj3);













return 0;
}
