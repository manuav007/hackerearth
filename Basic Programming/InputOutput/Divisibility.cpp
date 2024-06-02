#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lastDigit;
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        lastDigit = num % 10;
    }

    if (lastDigit == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}