// Program 21: Find the sum of all even and odd digits in a given number.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    int evenDigitSum = 0, oddDigitSum = 0;
    int temp = inputNumber;
    if (temp < 0) temp = -temp; // handle negative numbers

    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            evenDigitSum += digit;
        } else {
            oddDigitSum += digit;
        }
        temp /= 10;
    }

    cout << "Sum of even digits: " << evenDigitSum << endl;
    cout << "Sum of odd digits: " << oddDigitSum << endl;
    return 0;
}
