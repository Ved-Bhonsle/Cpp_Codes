// This code 

#include <iostream>
using namespace std;

class Person
{
	public:
		int age,height,weight;
		Person(int a,int h,int w)
		{
			age = a;
			weight = w;
			height = h;
		}
		void Talk()
		{
			cout << "My height:" << height << " weight:" << weight << " and age:" << age << endl;
		}
		void walk()
		{
			cout << "I can walk" << endl;
		}
//void 
};

class footballer: public Person
{
	footballer()
	{
		cout << "I am a Footballer" << endl;
	}
};

class doctor: public Person
{
	doctor()
	{
		cout << "I am a Doctor" << endl;
	}
};

class Bussinessman: public Person
{
	Bussinessman()
	{
		cout << "I am a Bussinessman" << endl;
	}
};

int main()
{
Person p1;
doctor d1;
Bussinessman b1;
footballer f1;


/*
d1.Person(30,175,70);
f1.Person(20,185,85);
b1.Person(35,180,80);

d1.Talk();
f1.Talk();
b1.Talk();
*/
return 0;
}
