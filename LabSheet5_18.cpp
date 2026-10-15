// Program 18: Check whether a number is a strong number.
// A strong number equals the sum of the factorials of its digits,
// e.g. 145 = 1! + 4! + 5!.
#include <iostream>
using namespace std;

int factorialOf(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    int sumOfFactorials = 0;
    int temp = inputNumber;
    while (temp != 0) {
        int digit = temp % 10;
        sumOfFactorials += factorialOf(digit);
        temp /= 10;
    }

    if (sumOfFactorials == inputNumber) {
        cout << inputNumber << " is a strong number." << endl;
    } else {
        cout << inputNumber << " is not a strong number." << endl;
    }
    return 0;
}
