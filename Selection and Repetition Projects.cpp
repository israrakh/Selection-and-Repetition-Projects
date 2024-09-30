// Selection and Repetition Projects.cpp : This file contains the Calculator and Merge Files programs.


// Calculator Program one.

#include <iostream>
using namespace std;

int main()
{
    // Declaring and initailizing variables
    int num1, num2;
    char ch;

    // Getting user input 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> ch;
    cout << "Enter the second number: ";
    cin >> num2;

    // Checking for operators and performing the appropriate operation
    if (ch == '+')
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    else if (ch == '-')
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    else if (ch == '*')
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    else if (ch == '/')
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
            cout << "Division by zero is not allowed!";
    else
        cout << "Unsupported operation!";

    return 0;
}
