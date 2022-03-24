#include <iostream>
using namespace std;

template <typename T,typename U>
class sample
{
	T a;
	T b;
	public:
		void getdata()
		{
			cout << "Enter A and B:" << endl;
			cin >> 	a >> b;	
		}
		void display()
		{
			cout << "The values:" << endl;
			cout << "a:" << a << "b:" << b << endl;
		}
};

int main()
{
	sample<int,int>s1;
	sample<int,double>s2;
	sample<float,float>s3;

	cout << "Int and Int data: " << endl;
	s1.getdata();
	s1.display();

	cout << "Int and double data: " << endl;
	s2.getdata();
	s2.display();

	cout << "Double and double data: " << endl;
	s3.getdata();
	s3.display();

	return 0;
}
