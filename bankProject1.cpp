#include <iostream>
#include <string>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "WelcomeScreen.h"
#include <windows.h> // For holding screen for n ms. 
using namespace std;


int main()
{
	WelcomeScreen initiate; // taking object to just print welcome on the screen for 3 seconds. 
	initiate.print_welcome();
	initiate.mainMenu();

	// Sleep screen for 3 second then clear 
	Sleep(3000);
	system("cls");

	//Unit tests:
	cout << "Unit tests: ";
	//--1--Client:
	cout << "\n- - - - - - - - - -\n";
	cout << "1.Client unit tests: ";
	cout << "\n- - - - - - - - - -\n";
	Client c;

	cout << "Client ID: ";
	int cID; cin >> cID;
	c.set_id(cID);

	cout << "Client Name: ";
	string cName; cin >> cName;
	c.setName(cName);

	cout << "Client Password: ";
	string cPass; cin >> cPass;
	c.setPassword(cPass);

	cout << "Client Balance: ";
	double cBal; cin >> cBal;
	c.setbalance(cBal);

	c.Display();

	//--2--Employee:
	cout << "\n- - - - - - - - - -\n";
	cout << "1.Employee unit tests: ";
	cout << "\n- - - - - - - - - -\n";
	Employee e;

	cout << "Employee ID: ";
	int eID; cin >> eID;
	e.set_id(eID);

	cout << "Employee Name: ";
	string eName; cin >> eName;
	e.setName(eName);

	cout << "Employee Password: ";
	string ePass; cin >> ePass;
	e.setPassword(ePass);

	cout << "Employee Salary: ";
	double eSal; cin >> eSal;
	e.setSalary(eSal);

	e.Display();

	//--3--Admin:
	cout << "\n- - - - - - - - - -\n";
	cout << "1.Admin unit tests: ";
	cout << "\n- - - - - - - - - -\n";
	Admin a;

	cout << "Admin ID: ";
	int aID; cin >> aID;
	a.set_id(aID);

	cout << "Admin Name: ";
	string aName; cin >> aName;
	a.setName(aName);

	cout << "Admin Password: ";
	string aPass; cin >> aPass;
	a.setPassword(aPass);

	cout << "Admin Salary: ";
	double aSal; cin >> aSal;
	a.setSalary(aSal);

	a.Display();




}