#include <iostream>
using namespace std;

class test
{
int marks;
float spi;
public:
void getData()
{
this->marks = 70;
this->spi = 6.5;
}
void display()
{
cout << "Marks:" << marks << " SPI:" << spi << endl; 
}
};

int main()
{
test t1;
t1.getData();
t1.display();

return 0;
}

