// Syntax for template

#include <iostream>
using namespace std;

template <typename T>
T sum(T n1,T n2)
{
T rs;
rs = n1 + n2;
return rs;
}

int main()
{
int A = 10, B = 20, C;
long a = 11,b = 22, c;

cout << sum(A,B) << endl << sum(a,b) << endl;

return 0;
}
