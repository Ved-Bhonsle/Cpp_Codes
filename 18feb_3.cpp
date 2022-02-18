// Max pf two numbers using call by reff

#include <iostream>
using namespace std;

int& max(int &x, int &y)
{
	if (x > y) { return x++; }	
	else { return y++; }
}

int main()
{
int a = 10, b = 2, ans;
ans = max(a,b);
cout << "Answer:" << ans << endl;

return 0;
}
