#include <iostream>
#include <algorithm> // adding lib to use remove_copy algorithm
#include <vector>
using namespace std;

int main()
{
	int i;
	char str[] = "I love C++ Programming";
	vector<char>v1,v2(30);

	for(i = 0; str[i]; i++) { v1.push_back(str[i]); }
	cout << "Input Sequence: ";
	for(i = 0;i<v1.size(); i++) { cout << v1[i]; }

	// Removing spaces
	// Syntax: remove_copy(itr_first,itr_last,itr_target,char_to_remove);
	remove_copy(v1.begin(),v1.end(),v2.begin(),' ');

	cout << "\nResult after removing spaces: ";
	for(i = 0;i<v2.size(); i++) { cout << v2[i]; }
	cout << endl << endl;

	return 0;
}
