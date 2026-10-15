// Program 5: Simulate a menu-driven calculator with default in switch.
#include <iostream>
using namespace std;

int main() {
    int menuChoice;
    double firstOperand, secondOperand, calculationResult;

    cout << "----- Menu Driven Calculator -----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> menuChoice;

    cout << "Enter first number: ";
    cin >> firstOperand;
    cout << "Enter second number: ";
    cin >> secondOperand;

    switch (menuChoice) {
        case 1:
            calculationResult = firstOperand + secondOperand;
            cout << "Result: " << firstOperand << " + " << secondOperand << " = " << calculationResult << endl;
            break;
        case 2:
            calculationResult = firstOperand - secondOperand;
            cout << "Result: " << firstOperand << " - " << secondOperand << " = " << calculationResult << endl;
            break;
        case 3:
            calculationResult = firstOperand * secondOperand;
            cout << "Result: " << firstOperand << " * " << secondOperand << " = " << calculationResult << endl;
            break;
        case 4:
            if (secondOperand == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                calculationResult = firstOperand / secondOperand;
                cout << "Result: " << firstOperand << " / " << secondOperand << " = " << calculationResult << endl;
            }
            break;
        default:
            // Runs when menuChoice does not match any case above
            cout << "Invalid choice! Please select a number between 1 and 4." << endl;
            break;
    }
    return 0;
}
