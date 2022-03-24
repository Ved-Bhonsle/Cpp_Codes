#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	char buf[100];
	int pos;

	fp.open("data_6_16-03.txt",ios::out | ios::ate); // opening file to add data

	cout << "Writing to the file" << endl;
	fp << "Line one" << endl;
	fp << "Line two" << endl;

	pos = fp.tellp(); // gives current position of pointer
	cout << "Current positon:" << pos << endl;

	fp.seekp(-7,ios::cur); // move 7 steps back
	fp << endl << "random data";
	fp.seekp(7,ios::beg);

	fp <<"hello world";
	fp.close();

	cout << "Done writing" << endl;

	fp.open("data_6_16-03.txt"); // reading from the file to print
	cout << "Reading the file:" << endl;
	fp.seekg(0);
	while(fp.getline(buf,100))
	{
		cout << buf << endl;
	}
	pos = fp.tellg();
	cout << "Pos ponter is :" << pos << endl;

	return 0;
}
