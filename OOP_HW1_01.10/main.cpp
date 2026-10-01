#include "Figure.h"
#include "Transport.h"
#include "Character.h"
#include "Document.h"
#include "Notification.h"

#include <iostream>
using namespace std;

int main()
{
	//1.Figure
/*	Circle obj1(5);
	obj1.printInfo();
	Rectangle obj2(5,10);
	obj2.printInfo();
	Triangle obj3(5, 10,5,5);
	obj3.printInfo();*/

//2.Transport
/*	Car obj1("Car", 240, "Mercedec");
	obj1.move();
	Train obj2("Train", 300, "Yamaha");
	obj1.move();
	Airplane obj3("Plane", 500, "AirPlane");
	obj1.move();*/

//3.Characters
/*
	Warrior obj1 ("Warrior", 120);
	obj1.attack();
	Mage obj2("Mage", 80);
	obj2.attack();
	Archer obj3("Archer", 100);
	obj3.attack();*/

//4.Document
/*	Book obj1("War and Peace", "Tolstoy");
	obj1.open();
	Magazine obj2("Time", "AuthorTime");
	obj2.open();
	Newspaper obj3("Pravda", "AuthorPravdu");
	obj3.open();*/

//5.Notification

	EmailNotification obj1("Andrey", "Hello");
	obj1.send();
	SMSNotification obj2("Nicolay", "How are you?");
	obj2.send();
	PushNotification obj3("Vasiliy", "Where are you from?");
	obj3.send();
}