// Program 22: Check whether a given number is a Harshad number.
// A Harshad (Niven) number is divisible by the sum of its digits.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    int digitSum = 0;
    int temp = inputNumber;
    while (temp != 0) {
        digitSum += temp % 10;
        temp /= 10;
    }

    if (digitSum != 0 && inputNumber % digitSum == 0) {
        cout << inputNumber << " is a Harshad number." << endl;
    } else {
        cout << inputNumber << " is not a Harshad number." << endl;
    }
    return 0;
}
