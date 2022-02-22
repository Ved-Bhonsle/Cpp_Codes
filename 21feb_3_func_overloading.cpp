// This code demonstrates Function overloading

#include <iostream>
using namespace std;

int sum(int a,int b);

float sum(int a,int b,float c);
//int sum(int a,int b,float c);
//char sum(int a,int b,float c);

float sum(int a,float b,float c,int d);
float sum(float a,int b,int c,float d);

char sum(int a,int b ,int c,int d,int e);

int main()
{
cout << "Sum of sum(10,20):" << sum(10,20) << endl;

cout << "Sum of sum(10,20,30.7):" << sum(10,20,30.7) << endl;
//cout << "Sum of sum(10,20,30.7):" << sum(10,20,30.7) << endl;
//cout << "Sum of sum(10,20,30.7):" << sum(10,20,30.7) << endl;

cout << "Sum of sum(10,20.3,30.4,40):" << sum(10,20.3,30.4,40) << endl;
cout << "Sum of sum(10.4,20,30,40.2):" << sum(10.4,20,30,40.2) << endl;

cout << "Sum of sum(7,20,30,20,20):" << sum(7,20,30,20,20) << endl;
return 0;
}

int sum(int a, int b){ return a+b; }

float sum(int a, int b,float c) { return a+b+c; }
//int sum(int a, int b,float c) { return a+b+c; }
//char sum(int a, int b,float c) { return a+b+c; }

float sum(int a,float b,float c,int d) { return a+b+c+d; }
float sum(float a,int b,int c,float d) { return a+b+c+d; }

char sum(int a, int b ,int c,int d,int e) { return a+b+c+d+e; }
