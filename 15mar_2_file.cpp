#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	string str;

	input.open("input_15mar_1.txt");

	if(!input)
	{
		cout << "File could not open\n";
	}
	else
	{
		while(!input.eof())
		{
			input >> str;
			cout << str << " ";
		}
	}

	return 0;
}
