
#include <iostream>
using namespace std;

int main() {
    int enteredNumber;
    int positiveCount = 0;

    cout << "Enter numbers one by one (enter 0 to stop):" << endl;

    while (true) {
        cin >> enteredNumber;

        if (enteredNumber == 0) {
            // Sentinel value reached, stop the loop
            break;
        }

        if (enteredNumber > 0) {
            positiveCount++;
        }
    }

    cout << "Total positive numbers entered: " << positiveCount << endl;
    return 0;
}
