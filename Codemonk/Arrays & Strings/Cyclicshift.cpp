#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long int n ,k;
        cin >> n >> k;
        string s;
        cin >> s;
        string max_s = "";
        long long int p = -1;
        long long int d = 0;
        for(int j = 0; j < s.length(); j++) {
            if(max_s < s) {
                max_s = s;
                d = j;
            }
            else if(max_s == s){
                p = j - d;
                break;
            }
            s = s.substr(1) + s[0];
        }
        if(p == -1){
            cout << (d + (k-1)*n) << endl;
        }
        else{
            cout << (d + (k-1)*p) << endl;
        }
    }
    return 0;
}
