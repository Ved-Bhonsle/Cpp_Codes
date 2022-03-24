// Printing whole line at a time

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fin,fout;
	char ch;	
	string str;

	fin.open("input_15mar_1.txt");
	fout.open("output_15mar_6.txt");

	while(!fin.eof())
	{
		fin.get(ch);
		fout << ch;
	}
	cout << "Copy done!!" << endl;
	fin.close();
	fout.close();

	return 0;
}
