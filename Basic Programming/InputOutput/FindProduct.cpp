#include <bits/stdc++.h>
using namespace std;
int main() {
    long int s;
    cin >> s;
    long long int arr[s];  
    for(int i = 0; i < s; i++) {
        cin >> arr[i];
    }
    long long int answer = 1;
    long long int MOD = 1e9 + 7;  
    for(int i = 0; i < s; i++) {
        answer = (answer * arr[i]) % MOD;
    }
    cout << answer; 
    return 0;  
}