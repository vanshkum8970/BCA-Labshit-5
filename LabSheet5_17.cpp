// Program 17: Display all perfect numbers between 1 and 1000.
#include <iostream>
using namespace std;

int main() {
    cout << "Perfect numbers between 1 and 1000: ";
    for (int candidate = 1; candidate <= 1000; candidate++) {
        int divisorSum = 0;
        for (int divisor = 1; divisor < candidate; divisor++) {
            if (candidate % divisor == 0) {
                divisorSum += divisor;
            }
        }
        if (divisorSum == candidate && candidate != 0) {
            cout << candidate << " ";
        }
    }
    cout << endl;
    return 0;
}
