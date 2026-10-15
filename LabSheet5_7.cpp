// Program 7: Read numbers until -1 is entered, skip negative numbers using continue.
#include <iostream>
using namespace std;

int main() {
    int enteredNumber;
    cout << "Enter numbers one by one (enter -1 to stop):" << endl;

    while (true) {
        cin >> enteredNumber;

        if (enteredNumber == -1) {
            // Sentinel value reached, stop reading input
            break;
        }

        if (enteredNumber < 0) {
            // Skip negative numbers (other than the -1 sentinel)
            cout << "Skipped negative number: " << enteredNumber << endl;
            continue;
        }

        cout << "You entered: " << enteredNumber << endl;
    }

    cout << "Finished reading numbers." << endl;
    return 0;
}
