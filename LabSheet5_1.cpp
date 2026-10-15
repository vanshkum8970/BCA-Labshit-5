// Program 1: Print numbers from 1 to 10, but skip 5 using continue.
#include <iostream>
using namespace std;

int main() {
    // loopCounter holds the current number being checked/printed
    for (int loopCounter = 1; loopCounter <= 10; loopCounter++) {
        if (loopCounter == 5) {
            // Skip printing 5 and move to the next iteration
            continue;
        }
        cout << loopCounter << " ";
    }
    cout << endl;
    return 0;
}
