// Program 2: Print numbers from 1 to 10, but stop at 7 using break.
#include <iostream>
using namespace std;

int main() {
    for (int currentNumber = 1; currentNumber <= 10; currentNumber++) {
        if (currentNumber == 7) {
            // Stop the loop completely once we reach 7
            break;
        }
        cout << currentNumber << " ";
    }
    cout << endl;
    return 0;
}
