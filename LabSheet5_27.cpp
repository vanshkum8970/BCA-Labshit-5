// Program 27: Find GCD of two numbers using loops.
#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    int smallerNumber = (firstNumber < secondNumber) ? firstNumber : secondNumber;
    int gcdResult = 1;

    for (int divisor = 1; divisor <= smallerNumber; divisor++) {
        if (firstNumber % divisor == 0 && secondNumber % divisor == 0) {
            gcdResult = divisor; // keep updating; the last match is the greatest
        }
    }

    cout << "GCD of " << firstNumber << " and " << secondNumber << " = " << gcdResult << endl;
    return 0;
}
