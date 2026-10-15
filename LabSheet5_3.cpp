// Program 3: Search for a number in a sequence; stop searching if found (break).
#include <iostream>
using namespace std;

int main() {
    const int SEQUENCE_SIZE = 8;
    int numberSequence[SEQUENCE_SIZE] = {12, 45, 7, 23, 9, 56, 34, 18};
    int searchTarget;
    bool numberFound = false;
    int foundPosition = -1;

    cout << "Enter the number to search for: ";
    cin >> searchTarget;

    for (int index = 0; index < SEQUENCE_SIZE; index++) {
        if (numberSequence[index] == searchTarget) {
            numberFound = true;
            foundPosition = index;
            // Stop searching as soon as the number is found
            break;
        }
    }

    if (numberFound) {
        cout << searchTarget << " found at position " << foundPosition << " (0-indexed)." << endl;
    } else {
        cout << searchTarget << " was not found in the sequence." << endl;
    }
    return 0;
}
