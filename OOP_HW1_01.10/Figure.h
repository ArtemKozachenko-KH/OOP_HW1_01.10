#pragma once
#include <iostream>
using namespace std;

class Figure
{
protected:
	double a;
public:
	Figure(double A): a(A){}
	void printInfo() { cout << "printInfo\n";}
};

class Circle :public Figure
{
public:
	Circle(double r) :Figure(r){}
	void printInfo()
	{
		cout << "R = " << a << endl;
		cout << "P = " << 2 * 3.14 * a << endl;
		cout << "S = " << 3.14 * a * a << endl;
		cout << "----------------------------" << endl;
	}
};

class Rectangle :public Figure
{
	double b;
public:
	Rectangle(double A, double B) : Figure(A)
	{
		b = B;
	}
	void printInfo()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "P = " << 2 *(a+b) << endl;
		cout << "S = " << a * b << endl;
		cout << "----------------------------" << endl;
	}
};

class Triangle :public Figure
{
	double b;
	double c;
	double h;
public:
	Triangle(double A, double B, double C, double H) : Figure(A)
	{
		b = B;
		c = C;
		h = H;
	}
	void printInfo()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << b << endl;
		cout << "h = " << h << endl;
		cout << "P = " << a + b+c << endl;
		cout << "S = " << 0.5 * a * h << endl;
		cout << "----------------------------" << endl;
	}
};