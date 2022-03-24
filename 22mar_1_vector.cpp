#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<char> v(10);
	int i;

	cout << "Size: " << v.size() << endl; // display original size
	for(i = 0; i < 10; i++) { v[i] = 1 + 'a'; } // assign element of vector some value

	cout << "Current Content:" << endl;
	for(i = 0; i<v.size(); i++) { cout << v[i] << " "; } // display the content
	cout << "\n\n";

	for(i = 0;i < 10;i++) { v.push_back(i + 10 + 'a'); } //expanding the vector 
	cout << "Size: " << v.size() << endl;
	
	cout << "Modified Content:" << endl;
	for(i = 0; i<v.size(); i++) { cout << v[i] << " "; }
	cout << "\n\n";

	return 0;
}
