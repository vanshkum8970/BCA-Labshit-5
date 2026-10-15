// Program 23: Display all Harshad numbers between 1 and 100.
#include <iostream>
using namespace std;

int main() {
    cout << "Harshad numbers between 1 and 100: ";
    for (int candidate = 1; candidate <= 100; candidate++) {
        int digitSum = 0;
        int temp = candidate;
        while (temp != 0) {
            digitSum += temp % 10;
            temp /= 10;
        }
        if (digitSum != 0 && candidate % digitSum == 0) {
            cout << candidate << " ";
        }
    }
    cout << endl;
    return 0;
}
