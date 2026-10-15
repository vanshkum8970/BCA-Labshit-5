// Program 15: Display Armstrong numbers between 1 and 500.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500: ";
    for (int candidate = 1; candidate <= 500; candidate++) {
        int digitCount = 0;
        int temp = candidate;
        while (temp != 0) {
            digitCount++;
            temp /= 10;
        }

        int sumOfPowers = 0;
        temp = candidate;
        while (temp != 0) {
            int digit = temp % 10;
            sumOfPowers += (int)round(pow(digit, digitCount));
            temp /= 10;
        }

        if (sumOfPowers == candidate) {
            cout << candidate << " ";
        }
    }
    cout << endl;
    return 0;
}
