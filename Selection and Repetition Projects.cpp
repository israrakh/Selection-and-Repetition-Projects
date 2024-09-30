// Selection and Repetition Projects.cpp : This file contains the Calculator and Merge Files programs.


// Calculator program two. 

#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize variables.
    int num1, num2;
    char ch;

    // Getting user input and printing the messages.
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> ch;
    cout << "Enter the second number: ";
    cin >> num2;

    // Checking and Performing operation based on the operator.
    switch (ch) {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed!!";
        break;
    default:
        cout << "Unsupported operation!";
    }

    return 0;
}
