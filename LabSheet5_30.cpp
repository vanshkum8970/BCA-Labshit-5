#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += (i * i * i);
    }

    cout << "Sum of cube series: " << sum << endl;
    return 0;
}
