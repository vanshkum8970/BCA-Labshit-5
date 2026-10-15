// Program 8: Print multiplication table for a given number, but stop when the product exceeds 50.
#include <iostream>
using namespace std;

int main() {
    int baseNumber;
    cout << "Enter a number: ";
    cin >> baseNumber;

    for (int multiplier = 1; multiplier <= 10; multiplier++) {
        int product = baseNumber * multiplier;
        if (product > 50) {
            // Stop printing once the product crosses 50
            break;
        }
        cout << baseNumber << " x " << multiplier << " = " << product << endl;
    }
    return 0;
}
