#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long int n, ans = 0, i = 1;
        cin >> n;
        while(i <= sqrt(n)){
            i*=2;
            if(n/i >= i/2){
                ans = n - n/i;
            }
            else{
                ans =  (n - (i/2)) + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}