#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // define variables
    string input;
    double num1;
    double num2;
    char operation;

    // get user input
    cout << "Welcome to My Calculator" << endl;

    while (true) {
        cout << "Enter your first number (or type 'quit' to exit): ";
        cin >> input;

        if (input == "quit") {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

    cout << "Enter the operation you want to use (+, -, /, *)" << endl;
    cin >> operation;

    cout << "Enter your second number: ";
    cin >> num2;

    num1 = stod(input);

    if (operation == '+') {
            cout << "Result: " << num1 + num2 << endl;
        } else if (operation == '-') {
            cout << "Result: " << num1 - num2 << endl;
        } else if (operation == '*') {
            cout << "Result: " << num1 * num2 << endl;
        } else if (operation == '/') {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
        } else {
            cout << "Unrecognized operation!" << endl;
        }
    }
    

    return 0;
}