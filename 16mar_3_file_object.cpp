#include <iostream>
#include <fstream>
using namespace std;

class student
{
	public:
		int roll;
		char name[20];
		float marks;
		string str;

		void getdata()
		{
			cout << "Enter name:";
			cin >> name;
			cout << "Enter Roll Number:";
			cin >> roll;
			cout << "Enter marks:";
			cin >> marks;
		}
		void AddRecord()
		{
			fstream f;
			student stu;
			f.open("Student.dat", ios::app | ios::binary);
			stu.getdata();
			f.write((char*)&stu,sizeof(stu));
			f.close();
		}
		void display()
		{
			fstream f;
			student s;
			f.open("Student.dat", ios::in | ios::binary);
			while(!f.eof())
			{		
				f.read((char*)&s,sizeof(s));
				cout << "Name:" << s.name << endl << "Roll Number:" << s.roll << endl << "Marks:" << s.marks << endl << endl;
			}
			f.close();
		}
};

int main()
{
	student s1;
	char ch = 'n';

	do
	{
		s1.AddRecord();
	//	s1.display();
		cout << "Want to add more?(y/n)";
		cin >> ch;
	}while(ch == 'y' || ch == 'Y');

	cout << "Updated!!!" << endl << endl;

	s1.display();

	return 0;
}
