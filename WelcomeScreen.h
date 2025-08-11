#include <iostream>
#include <windows.h>
using namespace std;
#pragma once

class WelcomeScreen
{
private:
    static const int ROWS = 5;
    static const int COLS = 7;

    // W
    char W[ROWS][COLS] = {
        {'*',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*'},
        {'*',' ','*',' ','*',' ','*'},
        {'*','*',' ',' ',' ','*','*'},
        {'*',' ',' ',' ',' ',' ','*'}
    };

    // E
    char E[ROWS][COLS] = {
        {'*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*','*','*','*','*',' ',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*','*','*','*','*','*','*'}
    };

    // L
    char L[ROWS][COLS] = {
        {'*',' ',' ',' ',' ',' ',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*','*','*','*','*','*','*'}
    };

    // C
    char C[ROWS][COLS] = {
        {' ','*','*','*','*','*',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {'*',' ',' ',' ',' ',' ',' '},
        {' ','*','*','*','*','*',' '}
    };

    // O
    char O[ROWS][COLS] = {
        {' ','*','*','*','*','*',' '},
        {'*',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*'},
        {' ','*','*','*','*','*',' '}
    };

    // M
    char M[ROWS][COLS] = {
        {'*',' ',' ','*',' ',' ','*'},
        {'*','*',' ','*',' ','*','*'},
        {'*',' ','*',' ','*',' ','*'},
        {'*',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*'}
    };

public:
    void print_welcome()
    {
        const int TERMINAL_WIDTH = 80;   // Assume 80 columns width
        const int SPACE_BETWEEN = 2;     // Space between letters
        const int LETTER_COUNT = 7;      // WELCOME has 7 letters

        // Total width of WELCOME
        int totalWidth = (LETTER_COUNT * COLS) + (SPACE_BETWEEN * (LETTER_COUNT - 1));
        int leftPadding = (TERMINAL_WIDTH - totalWidth) / 2;
        if (leftPadding < 0) leftPadding = 0;

        // Print top line
        for (int i = 0; i < leftPadding; i++) cout << ' ';
        for (int i = 0; i < totalWidth; i++) cout << '*';
        cout << "\n";

        // Print WELCOME letters row by row
        for (int row = 0; row < ROWS; row++) {
            for (int p = 0; p < leftPadding; p++) cout << ' ';

            // W
            for (int col = 0; col < COLS; col++) cout << W[row][col];
            cout << string(SPACE_BETWEEN, ' ');

            // E
            for (int col = 0; col < COLS; col++) cout << E[row][col];
            cout << string(SPACE_BETWEEN, ' ');

            // L
            for (int col = 0; col < COLS; col++) cout << L[row][col];
            cout << string(SPACE_BETWEEN, ' ');

            // C
            for (int col = 0; col < COLS; col++) cout << C[row][col];
            cout << string(SPACE_BETWEEN, ' ');

            // O
            for (int col = 0; col < COLS; col++) cout << O[row][col];
            cout << string(SPACE_BETWEEN, ' ');

            // M
            for (int col = 0; col < COLS; col++) cout << M[row][col];
            cout << string(SPACE_BETWEEN, ' ');

            // E (again)
            for (int col = 0; col < COLS; col++) cout << E[row][col];

            cout << endl;
        }

        // Print bottom line
        for (int i = 0; i < leftPadding; i++) cout << ' ';
        for (int i = 0; i < totalWidth; i++) cout << '*';
        cout << "\n";
        Sleep(3000);
        system("cls");
    }

    void mainMenu()
    {
        cout << "Welcome to our Bank";
        cout << "======================================"<< endl;
        cout << "choose from the following menu: " << endl;
        cout << "1- test 1 " << endl;
        cout << "2- test 2 "<<endl;
        cout << "3- test 3 " << endl;
        cout << "4- test 4 "<<endl;
        cout << "=======================================\n";
    }
    

};
