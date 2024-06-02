#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int hash[26] = {0}; 

    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    if (hash['o' - 'a'] == 2 * hash['z' - 'a']) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}