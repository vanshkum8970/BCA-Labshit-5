// Program 12: Generate Fibonacci series using while loop.
#include <iostream>
using namespace std;

int main() {
    int termCount;
    cout << "Enter the number of terms: ";
    cin >> termCount;

    long long previousTerm = 0, currentTerm = 1;
    int termsPrinted = 0;

    cout << "Fibonacci Series: ";
    while (termsPrinted < termCount) {
        cout << previousTerm << " ";
        long long nextTerm = previousTerm + currentTerm;
        previousTerm = currentTerm;
        currentTerm = nextTerm;
        termsPrinted++;
    }
    cout << endl;
    return 0;
}
