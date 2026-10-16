#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter numbers (enter -1 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -1)
            break;
        if (num < 0)
            continue;
        cout << "Accepted: " << num << endl;
    }
    return 0;
}
