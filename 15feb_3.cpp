#include <iostream>
using namespace std;

class measure
{
public:
int height,length,width;

void setInput(int h, int l, int w)
{
height = h;
length = l;
width = w;
}

int area() { return length*width; }
int volume() {return length*width*height; }

};

int main()
{
measure obj1,obj2;
obj1.setInput(10,20,30);
obj2.setInput(30,40,50);

cout << "For object 1: Area = " << obj1.area() << " Volume = " << obj1.volume() << "\n";
cout << "For object 2: Area = " << obj2.area() << " Volume = " << obj2.volume() << "\n";

return 0;
}
