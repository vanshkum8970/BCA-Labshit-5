// Program 30: Display the sum of series: 1^3 + 2^3 + 3^3 + ... + N^3.
#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    cout << "Enter the value of N: ";
    cin >> upperLimit;

    long long seriesSum = 0;
    for (int currentTerm = 1; currentTerm <= upperLimit; currentTerm++) {
        seriesSum += (long long)currentTerm * currentTerm * currentTerm;
    }

    cout << "Sum of series 1^3 + 2^3 + ... + " << upperLimit << "^3 = " << seriesSum << endl;
    return 0;
}
