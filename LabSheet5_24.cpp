// Program 24: Display the multiplication tables from 1 to 10.
#include <iostream>
using namespace std;

int main() {
    for (int tableNumber = 1; tableNumber <= 10; tableNumber++) {
        cout << "Multiplication table of " << tableNumber << ":" << endl;
        for (int multiplier = 1; multiplier <= 10; multiplier++) {
            cout << tableNumber << " x " << multiplier << " = " << (tableNumber * multiplier) << endl;
        }
        cout << endl;
    }
    return 0;
}
