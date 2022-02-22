// This code demonstrates use of inline function to return cube of number

#include <iostream>
using namespace std;

inline int cube(int a) { return a*a*a; }

int main()
{
int num;
cout << "Enter number:";
cin >> num;
cout << cube(num) << endl;
return 0;
}
