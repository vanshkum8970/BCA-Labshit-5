// Program 9: Demonstrate default case when no matching switch case exists.
#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    cout << "Enter a day number (1-7): ";
    cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            // Executes when dayNumber does not match any case (e.g. 0, 8, -3)
            cout << "Invalid day number! Please enter a value between 1 and 7." << endl;
            break;
    }
    return 0;
}
