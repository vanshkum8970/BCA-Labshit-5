#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1: cout << "Result: " << a + b << endl; break;
        case 2: cout << "Result: " << a - b << endl; break;
        case 3: cout << "Result: " << a * b << endl; break;
        case 4: cout << "Result: " << a / b << endl; break;
        default: cout << "Invalid choice!" << endl;
    }
    return 0;
}
