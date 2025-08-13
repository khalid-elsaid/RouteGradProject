#include <iostream>
#include <string>
using namespace std;
#pragma once
class Person
{
protected:
	string name; int id; string password;
public:
	//setters
	void set_name(string name)
	{
		this->name = name;

	}
	void set_id(int id)
	{

		this->id = id;
	}
	void set_password(int password)
	{
		this->password = password;
	}
	//getter 
	string get_name()
	{
		return this->name;
	}
	int get_id()
	{
		return this->id;
	}
	string get_password()
	{
		return this->password;
	}
	virtual void Display() = 0;
};

