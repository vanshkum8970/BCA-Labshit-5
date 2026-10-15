// Program 19: Display all strong numbers between 1 and 500.
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
    cout << "Strong numbers between 1 and 500: ";
    for (int candidate = 1; candidate <= 500; candidate++) {
        int sumOfFactorials = 0;
        int temp = candidate;
        while (temp != 0) {
            int digit = temp % 10;
            sumOfFactorials += factorialOf(digit);
            temp /= 10;
        }
        if (sumOfFactorials == candidate) {
            cout << candidate << " ";
        }
    }
    cout << endl;
    return 0;
}
