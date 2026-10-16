#include <iostream>
using namespace std;

int main() {
    int gradeCode;
    cout << "Enter grade code (1-3): ";
    cin >> gradeCode;

    switch (gradeCode) {
        case 1: cout << "Excellent" << endl; break;
        case 2: cout << "Good" << endl; break;
        case 3: cout << "Average" << endl; break;
        default: cout << "Default Triggered: No matching grade code!" << endl;
    }
    return 0;
}
