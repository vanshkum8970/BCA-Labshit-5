// Program 11: Calculate factorial of a number using while loop.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    long long factorialResult = 1;

    cout << "Enter a number: ";
    cin >> inputNumber;

    if (inputNumber < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    int counter = inputNumber;
    while (counter > 1) {
        factorialResult *= counter;
        counter--;
    }

    cout << "Factorial of " << inputNumber << " = " << factorialResult << endl;
    return 0;
}
