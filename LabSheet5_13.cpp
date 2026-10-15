// Program 13: Find and print all prime numbers between 1 and N.
#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    cout << "Enter the value of N: ";
    cin >> upperLimit;

    cout << "Prime numbers between 1 and " << upperLimit << ": ";
    for (int candidate = 2; candidate <= upperLimit; candidate++) {
        bool isPrime = true;
        for (int divisor = 2; divisor * divisor <= candidate; divisor++) {
            if (candidate % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << candidate << " ";
        }
    }
    cout << endl;
    return 0;
}
