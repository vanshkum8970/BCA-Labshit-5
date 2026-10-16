#include <iostream>
using namespace std;

int main() {
    cout << "Harshad numbers between 1 and 100: " << endl;
    for (int i = 1; i <= 100; i++) {
        int temp = i, sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (i % sum == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
