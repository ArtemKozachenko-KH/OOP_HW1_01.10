#pragma once
#include <iostream>
using namespace std;

class Document
{
protected:
	string name;
	string author;

public:
	Document(string n, string a) : name(n), author(a) {}
	void open()
	{
		cout << "\n\t|-----Open:-----|"
			<< "\n\t Name: " << name
			<< "\n\t Author: " << author;
	}
};

class Book :public Document
{
public:
	Book(string n, string a) :Document(n, a) {}
	void open()
	{
		Document::open();
		cout << "\n\tOpen Book";
	}
};

class Magazine :public Document
{
public:
	Magazine(string n, string a) :Document(n, a) {}
	void open()
	{
		Document::open();
		cout << "\n\tOpen Magazine";
	}
};

class Newspaper :public Document
{
public:
	Newspaper(string n, string a) :Document(n, a) {}
	void open()
	{
		Document::open();
		cout << "\n\tOpen Newspaper";
	}
};
