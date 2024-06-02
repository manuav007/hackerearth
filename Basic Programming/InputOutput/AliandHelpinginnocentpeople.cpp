#include <bits/stdc++.h>
#include <cctype>
using namespace std;
bool isVowel(char ch) {
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y';
}
bool isValidTag(const string &tag) {
    char letter = tag[2];
    if (isVowel(letter)) return false;

    int positions[4][2] = {{0, 1}, {3, 4}, {4, 5}, {7, 8}};
    for (auto &pos : positions) {
        int d1 = tag[pos[0]];
        int d2 = tag[pos[1]];
        if ((d1 + d2) % 2 != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    if (isValidTag(s)) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }
    return 0;
}
