#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter numbers (enter 0 to stop):" << endl;

    while (true) {
        cin >> num;
        if (num == 0)
            break;
        if (num > 0)
            count++;
    }
    cout << "Total positive numbers: " << count << endl;
    return 0;
}
