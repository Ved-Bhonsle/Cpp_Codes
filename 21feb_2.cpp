// This code demonstrates use of function with default arguments

#include <iostream>
using namespace std;

 int cubeVolume(int l=10,int w=9,int h=2) { return l*w*h; }

int main()
{
cout << "Output for cubeVolume():" << cubeVolume() << endl;
cout << "Output for cubeVolume(10):" << cubeVolume(11) << endl; 
cout << "Output for cubeVolume(10,8):" << cubeVolume(11,8) << endl; 
cout << "Output for cubeVolume(10,8,3):"<< cubeVolume(11,8,3) << endl;
return 0;
}
