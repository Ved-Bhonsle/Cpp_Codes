#include <iostream>
#include <fstream>
using namespace std;

int main()
{
fstream myfile;

myfile.open("myfile.txt",ios::in);

if(!myfile)
{
cout << "Cannot open file" << endl;
}
return 0;
}
