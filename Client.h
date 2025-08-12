
#include "Validate.h"
#include "Person.h"
#include <iostream>
using namespace std;
#include <string>

#pragma once
class Client : Person
{
protected:
	double balance;

public:
	// Default Constractor
	Client() {
		this->balance = 0;
	}
	// create the constractor
	Client(int id, string name, string password, double balance) {
		this->balance = balance;
	}

	void setName(const string& newName) {
		if (Validation::isname(newName)) {
			this->name = newName;
		}
		else {
			cout << "Invalid name! Name must be alphabetic, 5-20 characters.\n";
		}
	}

	bool setPassword(string  password) {
		if (Validation::ispassword(password)) {
			this ->password = password;
		}
		else {
			cout << "Invalid password! Password must be 8-20 characters.\n";
		}
	}

	// Getter Function 
	double getBalance() {
		return this->balance;
	}
	// create method
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << "Deposited successfully ; your balance is " << balance << endl;
		}
		else
			cout << "Invalide amount \n";
	}

	void withdraw(double amount) {
		if (amount > 0 ) {
			balance -= amount;
			cout << "Withdraw successfully ; your balance is " << balance << endl;
		}
		else
			cout << "Invalide amount \n";
	}

	void transferTo(double amount, Client& recipient) {
		if (amount > 0) {
			balance -= amount;
			recipient.deposit(amount);
			cout << "Transferred successfully ; your balance is " << balance << endl;
		}
		else
			cout << "Transfer falied;check your balance please \n";
	}

	void checkBalance() {
		cout << "Your Balance IS : " << balance << endl;
	}

	void Display() {
		cout << "Display Client Info : " << endl;
		cout << "Client ID " << id << endl;
		cout << "Name: " << name<< endl;
		cout << "Balance: " << balance << endl;
	}
};


