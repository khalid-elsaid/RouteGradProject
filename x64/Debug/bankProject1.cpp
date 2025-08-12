#include <iostream>
#include <string>
#include "Person.h"
#include "Client.h"
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

	int choice;
	int id;
	string password;
	int userType;
	cout << "Select : 1. Client 2. Employee 3. Admin\n";
	cin >> userType;

	if (userType == 1) { /* Client logic */ }
	else if (userType == 2) { /* Employee logic */ }
	else if (userType == 3) { /* Admin logic */ }
	else {
		cout << "Invalid choice.\n";
	}

	//Client
	cout << "Client Login\nEnter ID: ";
	cin >> id;
	cout << "Enter Password: ";
	cin >> password;

	Client* loggedInClient = nullptr;

	// Find and authenticate client
	for (auto& client : clients) {
		if (client.login(id, password)) {
			loggedInClient = &client;
			break;
		}
	}

	if (!loggedInClient) {
		cout << "Invalid ID or password.\n";
		return 0;
	}

	cout << "Welcome " << loggedInClient->getName() << "!\n";

	do {
		// Display menu
		cout << "\n-----Client MENU -----\n";
		cout << "1. Deposit\n";
		cout << "2. Withdraw\n";
		cout << "3. Check Balance\n";
		cout << "4.transfer\n";
		cout << "5. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
	}

	switch (choice) {
	case 1:
		double amount;
		cout << "Enter amount to deposit: ";
		cin >> amount;
		loggedInClient->deposit(amount);
		break;
	case 2:
		double withdraw;
		cout << "Enter amount to withdraw: ";
		cin >> withdraw;
		loggedInClient->withdraw(withdraw);
		break;
	case 3:
		loggedInClient->checkBalance();
		break;
	case 4:
		int recipientId;
		double transferAmount;
		cout << "Enter recipient ID: ";
		cin >> recipientId;
		cout << "Enter amount to transfer: ";
		cin >> transferAmount;
		for (auto& c : clients) {
			if (c.getId() == recipientId) {
				loggedInClient->transferTo(transferAmount, c);
				break;
			}
		}
		break;
	case 5:
		exitProgram();
		break;
	default:
		cout << "Invalid choice, please try again.\n";
	}

	//Employee

	cout << "Employee Login:\n";
	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter Password: ";
	cin >> password;

	Employee emp(id, name, password, salary, clients);

	int choice;
	do {
		cout << "\n--- Employee Menu ---\n";
		cout << "1. Add Client\n2. Search Client\n3. List Clients\n4. Edit Client\n5. Display My Info\n0. Exit\n";
		cout << "Enter choice: ";
		cin >> choice;
	}
	switch (choice) {
	case 1: emp.addClient(); break;
	case 2: emp.searchClient(); break;
	case 3: emp.listClients(); break;
	case 4: emp.editClient(); break;
	case 5: void display(); break;
	case 0: cout << "Logging out...\n"; break;
	default: cout << "Invalid choice.\n";
	}

	while (choice != 0);

	else {
		cout << "Invalid login.\n";
	}
	// Admin

	cout << "Admin Login:\n";
	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter Password: ";
	cin >> pass;

	Admin admin(id, name, password, salary, clients, employees);
	int choice;
	do {
		cout << "\n--- Admin Menu ---\n";
		cout << "1. Add Employee\n2. Search Employee\n3. Edit Employee\n4. List Employees\n";
		cout << "5. Add Client\n6. Search Client\n7. Edit Client\n8. List Clients\n";
		cout << "9. Display My Info\n0. Logout\n";
		cout << "Enter choice: ";
		cin >> choice;

		switch (choice) {
		case 1: admin.addEmployee(); break;
		case 2: admin.searchEmployee(); break;
		case 3: admin.editEmployee(); break;
		case 4: admin.listEmployees(); break;
		case 5: admin.addClient(); break;
		case 6: admin.searchClient(); break;
		case 7: admin.editClient(); break;
		case 8: admin.listClients(); break;
		case 9: void display(); break;
		case 0: cout << "Logging out...\n"; break;
		default: cout << "Invalid choice.\n";
		}

	} while (choice != 0);
}
		else {
	cout << "Invalid login.\n";
	}



}