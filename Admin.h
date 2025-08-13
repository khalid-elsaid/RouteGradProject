#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
#pragma once

class Admin :public Employee {
public:
	//Default Constructor:
	Admin() {
		this->salary = 0;
	}

	//Parameterized Constructor:
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {}

	//Methods
	void Display() {
		cout << "\n- - - - - - - - - -\n";
		cout << "Display Admin Info : " << endl;
		cout << "ID: " << this->id << endl;
		cout << "Name: " << this->name << endl;
		cout << "Password: " << this->password << endl;
		cout << "Salary: " << this->salary << endl;
		cout << "- - - - - - - - - -\n";
	}
};