// Program 6: Check if a number is prime, terminate loop early using break.
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> inputNumber;

    if (inputNumber <= 1) {
        isPrime = false;
    } else {
        for (int divisor = 2; divisor * divisor <= inputNumber; divisor++) {
            if (inputNumber % divisor == 0) {
                isPrime = false;
                // No need to check further once a divisor is found
                break;
            }
        }
    }

    if (isPrime) {
        cout << inputNumber << " is a prime number." << endl;
    } else {
        cout << inputNumber << " is not a prime number." << endl;
    }
    return 0;
}
