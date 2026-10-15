// Program 25: Print prime factors of a given number.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    cout << "Prime factors of " << inputNumber << ": ";
    int remainingValue = inputNumber;

    // Factor out 2s first
    while (remainingValue % 2 == 0) {
        cout << 2 << " ";
        remainingValue /= 2;
    }

    // Factor out odd divisors
    for (int divisor = 3; divisor * divisor <= remainingValue; divisor += 2) {
        while (remainingValue % divisor == 0) {
            cout << divisor << " ";
            remainingValue /= divisor;
        }
    }

    // If remainingValue is still greater than 2, it is prime itself
    if (remainingValue > 2) {
        cout << remainingValue << " ";
    }
    cout << endl;
    return 0;
}
