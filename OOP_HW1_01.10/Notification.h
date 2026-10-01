#pragma once
#include <iostream>
using namespace std;

class Notification
{
protected:
	string getter;
	string text;

public:
	Notification(string g, string t) : getter(g), text(t) {}
	void send()
	{
		cout << "\n\t|-----Send:-----|"
			<< "\n\t Getter: " <<getter 
			<< "\n\t Text: " << text;
	}
};

class EmailNotification :public Notification
{
public:
	EmailNotification(string g, string t) : Notification(g, t) {}
	void send()
	{
		Notification::send();
		cout << "\n\tSended by: Email";
	}
};

class SMSNotification :public Notification
{
public:
	SMSNotification(string g, string t) : Notification(g, t) {}
	void send()
	{
		Notification::send();
		cout << "\n\tSended by: SMS";
	}
};

class PushNotification :public Notification
{
public:
	PushNotification(string g, string t) : Notification(g, t) {}
	void send()
	{
		Notification::send();
		cout << "\n\tSended by: Push";
	}
};