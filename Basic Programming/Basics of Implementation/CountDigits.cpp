#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int arr[10] = {0}; 
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])) { 
            ++arr[s[i] - '0']; 
        }
    }
    for(int i = 0; i < 10; i++){
        cout << i << ' ' << arr[i] << endl;
    }
    return 0;
}
