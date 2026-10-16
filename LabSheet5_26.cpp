#include <iostream>
using namespace std;

int main() {
    int a, b, maxVal;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    maxVal = (a > b) ? a : b;

    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0) {
            cout << "LCM: " << maxVal << endl;
            break;
        }
        maxVal++;
    }
    return 0;
}
