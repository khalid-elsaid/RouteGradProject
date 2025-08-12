#include <iostream>
#include <string>
#include <cctype>  //for isalpha
#include <windows.h>  // For Sleep
#include <vector>
using namespace std;

#pragma once
class Validation {
public:
	static bool isname(string name) {
		if (name.length() < 5 || name.length() > 20) {
			cout << "Please enter name between 5 to 20 characters \n";
			return false;
		}
		for (char ch : name) {
			if (!isalpha(ch)) {
				cout << "Please enter only alphabetic characters \n";
				return false;
			}
		}
		return true;
	}
	static bool ispassword(string password) {
		if (password.length() < 8 || password.length() > 20) {
			cout << "Please enter password between 8 to 20 characters \n";
			return false;
		}
		return true;
	}
	static bool isbalance(double balance) {
		if (balance < 1500) {
			cout << "Minimum balance allowed is 1500 $ \n";
			return false;
		}
		return true;
	}
	static bool issalary(double salary) {
		if (salary < 5000) {
			cout << "Minimum salary allowed is 5000 $ \n";
			return false;
		}
		return true;
	}
};
