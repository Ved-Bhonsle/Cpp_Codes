#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream ofile;
ofile.open("data_16-03.txt");
ofile << "Line in the document" << endl;
ofile << "Another line" << endl;

cout << "To the terminal" << endl;
ofile.close();

return 0;
}
