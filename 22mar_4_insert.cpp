#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(10);
	vector<int>::iterator p;
	int i = 0;

	p = v.begin();
	while(p != v.end())
	{
		*p = i + 1;
		p++;
		i++;
	}

	cout << "Content:\n";
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " "; 
		p++;
	}

	p = v.begin();
	v.insert(p + 1,2); // inserting at second location

	cout << "\n Modified Content:\n";
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " "; 
		p++;
	}

	p = v.begin();
	v.erase(p + 1);  // erasing content

	cout << "\nErasing single Content:\n";
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " "; 
		p++;
	}
	cout << endl;

	v.erase(p - 5,p - 1);

	cout << "\nErasing single Content:\n";
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " "; 
		p++;
	}
	cout << endl;

	return 0;
}
