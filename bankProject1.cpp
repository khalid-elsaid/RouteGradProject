#include <iostream>
#include <string>
#include "Person.h"
#include "WelcomeScreen.h"
#include <windows.h> // For holding screen for n ms. 

using namespace std;


int main()
{
	WelcomeScreen initiate; // taking object to just print welcome on the screen for 3 seconds. 
	initiate.print_welcome();
	initiate.mainMenu();
}