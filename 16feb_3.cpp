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

	int add() 
	{ 
		int output1;
		output1 = input1 + input2;
		return  output1;
	}
	int sub() 
	{ 
		int output2;
		output2 = input1 - input2;
		return  output2;
	}
	
	int mul();
	int div();
	int mod_div();
};

int calculator::mul() { return input1*input2; }
int calculator::div() { return input1/input2; }
int calculator::mod_div() { return input1%input2; }

int main()
{
	int x,i;
	calculator obj;
	obj.setInput(10,2);

	cout << "Input 1 is "<< obj.input1 << "\n" << "Input 2 is " << obj.input2 << endl;

	cout << "Choose operation: \n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modular Division\n\nInput:";
	cin >> x;

	switch(x)
	{
	case 1:
		i = obj.add();
		cout << "Addition is " << i << "\n";
		break;

	case 2:
		i = obj.sub();
		cout << "Substraction is " << i << "\n";
		break;

	case 3:
		cout << "Multiplication is " << obj.mul() << "\n";
		break;

	case 4:
		cout << "Division is " << obj.div() << "\n";
		break;

	case 5:
		cout << "Modular Division is " << obj.mod_div() << "\n";
		break;

	default:
		break;

	}
	 
	return 0;

}
