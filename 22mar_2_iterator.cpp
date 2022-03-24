#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(10); // create a vector
	vector<int>:: iterator p; // create an iterator 
	int i,j;

	p = v.begin();
	i = 0;

	while(p != v.end())
	{
		*p = i + 'a';
		p++;
		i++;
	}

	cout << "Original Contents: " << endl;
	p = v.begin();
	for(p != v.end())
	{
		cout << *p << " ";
		p++;
	}

	p = v.begin(); // modify the content
	while(p != v.end())
	{
		*p = toupper(*p);
		p++;
	}

	cout << "\nModified Contents: " << endl;
	p = v.begin();
	for(p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;

	return 0;
}
