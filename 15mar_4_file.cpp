// Reading with delimiters/seperators

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	string str,str2;

	input.open("input_15mar_4.txt");

	if(!input)
	{
		cout << "File could not open\n";
	}
	else
	{
		while(!input.eof())
		{
			input >> str >> str2;
			cout << str << '\t' << str2 << endl;
		}
	}
	input.close();

	return 0;
}
