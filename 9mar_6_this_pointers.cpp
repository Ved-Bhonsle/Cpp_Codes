#include <iostream>
using namespace std;

class person
{
int age;
public:
person(int a) { age = a; }
void display() { cout << "age:" << age << endl; }
person olderperson(person p)
{
if(age > p.age)
{
return *this;
}
else
{
return p;
}
}

};

int main()
{
person r(42),h(40);

person o=r.olderperson(h);
o.display();

return 0;
}
