#include <iostream>
using namespace std;

int main() {
    cout << "Perfect numbers between 1 and 1000: ";
    for (int num = 1; num <= 1000; num++) {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0)
                sum += i;
        }
        if (sum == num)
            cout << num << " ";
    }
    cout << endl;
    return 0;
}
