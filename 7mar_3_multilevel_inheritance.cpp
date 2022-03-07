// Multilevel Inheritance

#include <iostream>
using namespace std;

class Person
{
	public:
		int p = 1;
		void display1()
		{
			cout << p << ":" << "I am a Person" << endl;
		}
};

class Student : public Person
{
	public:
		int s = 2;
		void display2()
		{
			cout << s << ":" << "I am a Student " << ++p << endl;
		}
};

class IT_Student : public Student
{
	public:
		int it_stud = 3;
		void display3()
		{
			cout << it_stud << ":" << "I am an IT Student " << ++p << endl;
		}
};

int main()
{
	IT_Student a1;

	a1.display1();
	a1.display2();
	a1.display3();

	return 0;
}
