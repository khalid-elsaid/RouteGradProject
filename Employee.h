#include <iostream>
#include <string>
#include "Person.h"
#include "Validate.h"
using namespace std;
#pragma once

class Employee :public Person {
protected:
	double salary;

public:
	//Default Constructor:
	Employee() {
		this->salary = 0;
	}

	//Parameterized Constructor:
	Employee(int id, string name, string password, double salary) {
		if (Validation::isname(name)) {
			this->name = name;
		}
		if (Validation::ispassword(password)) {
			this->password = password;
		}
		if (Validation::issalary(salary)) {
			this->salary = salary;
		}
	}

	//Setter:
	void setName(string name) {
		if (Validation::isname(name)) {
			this->name = name;
		}
	}
	void setPassword(string  password) {
		if (Validation::ispassword(password)) {
			this->password = password;
		}
	}
	void setSalary(double salary) {
		if (Validation::issalary(salary)) {
			this->salary = salary;
		}
	}

	//Getter:
	double getSalary() {
		return this->salary;
	}

	//Method:
	void Display() {
		cout << "\n- - - - - - - - - -\n";
		cout << "Display Employee Info : " << endl;
		cout << "ID: " << this->id << endl;
		cout << "Name: " << this->name << endl;
		cout << "Password: " << this->password << endl;
		cout << "Salary: " << this->salary << endl;
		cout << "- - - - - - - - - -\n";
	}

};
