//count number of words
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	string str;
	int count = 0;

	input.open("input_15mar_1.txt");

	if(!input)
	{
		cout << "File could not open\n";
	}
	else
	{	input >> str;
		while(!input.eof())
		{
			//input >> str;
			count++;
			input >> str;
		}
	}
	cout << "Count: " << count << endl;
	return 0;
}
