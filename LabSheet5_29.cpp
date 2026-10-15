// Program 29: Display the sum of series: 1^2 + 2^2 + 3^2 + ... + N^2.
#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    cout << "Enter the value of N: ";
    cin >> upperLimit;

    long long seriesSum = 0;
    for (int currentTerm = 1; currentTerm <= upperLimit; currentTerm++) {
        seriesSum += (long long)currentTerm * currentTerm;
    }

    cout << "Sum of series 1^2 + 2^2 + ... + " << upperLimit << "^2 = " << seriesSum << endl;
    return 0;
}
