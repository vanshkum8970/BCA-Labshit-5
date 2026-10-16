#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500: ";
    for (int i = 1; i <= 500; i++) {
        int temp = i, sum = 0;
        while (temp != 0) {
            int d = temp % 10;
            sum += d * d * d;
            temp /= 10;
        }
        if (sum == i)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
