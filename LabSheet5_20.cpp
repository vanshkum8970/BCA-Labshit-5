// Program 20: Print reverse of a number and check if it's a palindrome.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    int originalNumber = inputNumber;
    int reversedNumber = 0;

    while (inputNumber != 0) {
        int lastDigit = inputNumber % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        inputNumber /= 10;
    }

    cout << "Reversed number: " << reversedNumber << endl;

    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }
    return 0;
}
