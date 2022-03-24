#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outfile;

	outfile.open("data_5_16-03.txt");
	outfile << "This is my file";

	int pos = outfile.tellp();
	outfile.seekp(pos+6);
	outfile << "Again my file";
	cout << "Done" << endl;

	outfile.close();

	return 0;
} 
