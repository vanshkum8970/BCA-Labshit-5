// Program 28: Display the sum of series: 1 + 2 + 3 + ... + N.
#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    cout << "Enter the value of N: ";
    cin >> upperLimit;

    long long seriesSum = 0;
    for (int currentTerm = 1; currentTerm <= upperLimit; currentTerm++) {
        seriesSum += currentTerm;
    }

    cout << "Sum of series 1 + 2 + ... + " << upperLimit << " = " << seriesSum << endl;
    return 0;
}
