// Program 14: Check whether a given number is Armstrong or not.
// An Armstrong number equals the sum of its own digits each raised to the
// power of the number of digits (e.g. 153 = 1^3 + 5^3 + 3^3).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    // Count the number of digits
    int digitCount = 0;
    int temp = inputNumber;
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    int sumOfPowers = 0;
    temp = inputNumber;
    while (temp != 0) {
        int digit = temp % 10;
        sumOfPowers += (int)round(pow(digit, digitCount));
        temp /= 10;
    }

    if (sumOfPowers == inputNumber) {
        cout << inputNumber << " is an Armstrong number." << endl;
    } else {
        cout << inputNumber << " is not an Armstrong number." << endl;
    }
    return 0;
}
