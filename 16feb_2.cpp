// Passing objects as function  and returning objects//

#include <iostream>
using namespace std;

class calculator
{
	public:
	int input1,input2;

	void setInput(int a, int b)
	{
		input1 = a;
		input2 = b;
	}

	calculator add(calculator,calculator);
	int sub() { return input1 - input2; }
	int mul() { return input1*input2; }
	int div() { return input1/input2; }
	int mod_div() { return input1%input2; }
};

calculator calculator::add(calculator c1,calculator c2) 
{ 
	calculator c3;
	c3.input1 = c1.input1 + c2.input1;
	c3.input2 = c1.input2 + c2.input2;
	return c3; 
}

int main()
{
	int x;
	calculator obj1,obj2,obj3;
	obj1.setInput(10,2);
	obj2.setInput(15,5);

	cout << "For obj 1 => Input 1 is "<< obj1.input1 << " and " << "Input 2 is " << obj1.input2 << endl;
	cout << "For obj 2 => Input 1 is "<< obj2.input1 << " and " << "Input 2 is " << obj2.input2 << endl;
	
	obj3 = obj3.add(obj1,obj2);
	cout << "Sum of Input 1 is "<< obj3.input1 << "\n" << "Sum of Input 2 is " << obj3.input2 << endl;
	
	return 0;

}
