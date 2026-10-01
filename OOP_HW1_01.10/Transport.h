#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	string name;
	double maxSpeed;
	string brand;
public:
	Transport(string n, double ms, string b) : name(n), maxSpeed(ms),brand(b) {}
	void move()
	{ 
		cout << "\n\t|-----Transport:-----|"
			<< "\n\t Name: " << name
			<< "\n\t Max Speed: " << maxSpeed
			<< "\n\t Brand: " << brand;
	}
};

class Car :public Transport
{
public:
	Car(string n, double ms, string b) :Transport(n,ms,b) {}
	void move()
	{
		Transport::move();
		cout<< "\n\tMove on road";
	}
};

class Train :public Transport
{
public:
	Train(string n, double ms, string b) :Transport(n, ms, b) {}
	void move()
	{
		Transport::move();
		cout << "\n\tMove on rail";
	}
};

class Airplane :public Transport
{
public:
	Airplane(string n, double ms, string b) :Transport(n, ms, b) {}
	void move()
	{
		Transport::move();
		cout << "\n\tFly";
	}
};