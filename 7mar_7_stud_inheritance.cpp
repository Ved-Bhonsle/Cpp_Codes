// Student Inheritance

#include <iostream>
#include <string>
using namespace std;

class student
{
	public:
		int roll;
		string name;
		void getInfo(int r, string s)
		{
			name = s;
			roll = r;
		}
		void printInfo()
		{
			cout << endl << "Name: " << name << " Roll No.: " << roll << endl;
		}
};

class test
{
	public:
		int marks[5];
		void getMarks()
		{
			int i;
			for (i = 0;i<5;i++)
			{
				cout << "Enter marks of subject " << (i+1) << ":" ;
				cin >> marks[i];
			}
		}
};


class result: public student, public test
{
	public:
		int sum = 0;
		void totalMarks()
		{
			for(int i = 0;i<5;i++)
			{
				sum += marks[i];
			}
			cout << "Total Marks: " << sum;
		}
		void percentage()
		{
			cout << endl << "Percentage: " << (sum*100)/500 << endl;
		}
};

int main()
{
result s1;

s1.getInfo(10,"Student_1");
s1.getMarks();

s1.printInfo();
s1.totalMarks();
s1.percentage();

return 0;
}
