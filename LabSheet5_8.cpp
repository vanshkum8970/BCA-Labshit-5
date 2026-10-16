#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        int prod = n * i;
        if (prod > 50)
            break;
        cout << n << " x " << i << " = " << prod << endl;
    }
    return 0;
}
