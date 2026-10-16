#include <iostream>
using namespace std;

int main() {
    int a, b, gcd = 1;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int minVal = (a < b) ? a : b;
    for (int i = 1; i <= minVal; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    cout << "GCD: " << gcd << endl;
    return 0;
}
