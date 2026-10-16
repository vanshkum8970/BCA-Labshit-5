#include <iostream>
using namespace std;

int main() {
    cout << "Strong numbers between 1 and 500: ";
    for (int n = 1; n <= 500; n++) {
        int temp = n, sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            int fact = 1;
            for (int i = 1; i <= d; i++)
                fact *= i;
            sum += fact;
            temp /= 10;
        }
        if (sum == n)
            cout << n << " ";
    }
    cout << endl;
    return 0;
}
