#include <iostream>
using namespace std;

int main() {
    int num, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
        int d = temp % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is a Strong number." << endl;
    else
        cout << num << " is not a Strong number." << endl;

    return 0;
}
