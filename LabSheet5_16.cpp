// Program 16: Check whether a number is a perfect number.
// A perfect number equals the sum of its proper divisors (excluding itself),
// e.g. 6 = 1 + 2 + 3.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    int divisorSum = 0;
    for (int divisor = 1; divisor < inputNumber; divisor++) {
        if (inputNumber % divisor == 0) {
            divisorSum += divisor;
        }
    }

    if (inputNumber > 0 && divisorSum == inputNumber) {
        cout << inputNumber << " is a perfect number." << endl;
    } else {
        cout << inputNumber << " is not a perfect number." << endl;
    }
    return 0;
}
