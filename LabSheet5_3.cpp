#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 23, 67, 34};
    int target = 23;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            cout << "Found " << target << " at position " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Not found" << endl;
    return 0;
}
