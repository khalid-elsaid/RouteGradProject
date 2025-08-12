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

	// .........
	// After check input  and User Chose Client
	int id ;
	float palance;
	string name, password; 
	cout << "Write Client Id:: ";
	cin >> id;
	cout << "Write Password: ";
	cin >> password;
	cout << "Write palance: ";
	cin >> palance;
	cout << "Write name: ";
	cin >> name;




}