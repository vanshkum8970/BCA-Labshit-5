#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    cout << "Reversed Number: " << rev << endl;
    if (rev == n)
        cout << "It is a Palindrome." << endl;
    else
        cout << "It is not a Palindrome." << endl;

    return 0;
}
