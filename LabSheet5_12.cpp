#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter number of terms: ";
    cin >> n;

    int count = 1;
    while (count <= n) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        count++;
    }
    cout << endl;
    return 0;
}
