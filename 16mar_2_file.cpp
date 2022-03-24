#include <iostream>
#include <fstream>
using namespace std;

int main()
{
char line[100];
fstream file;

file.open("data_16-03.txt",ios::out | ios::app);

if(file.fail())
{
cout << "File did not open\n";
}
else
{
cout << "Name:" << endl;
cin.getline(line,100);
file << line << endl; //append
cout << "Age:" << endl;
cin.getline(line,100);
file << line << endl; //append age
cout << "File updated" << endl;
}

return 0;
}
