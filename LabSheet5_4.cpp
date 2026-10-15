// Program 4: Display even numbers between 1 and 20, skipping multiples of 4 (continue).
#include <iostream>
using namespace std;

int main() {
    for (int currentNumber = 1; currentNumber <= 20; currentNumber++) {
        if (currentNumber % 2 != 0) {
            // Not even, skip to next number
            continue;
        }
        if (currentNumber % 4 == 0) {
            // Even but also a multiple of 4, skip it
            continue;
        }
        cout << currentNumber << " ";
    }
    cout << endl;
    return 0;
}
