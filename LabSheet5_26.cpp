// Program 26: Find LCM of two numbers using loops.
#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    int largerNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;

    int lcmResult = largerNumber;
    while (true) {
        if (lcmResult % firstNumber == 0 && lcmResult % secondNumber == 0) {
            break;
        }
        lcmResult += largerNumber;
    }

    cout << "LCM of " << firstNumber << " and " << secondNumber << " = " << lcmResult << endl;
    return 0;
}
