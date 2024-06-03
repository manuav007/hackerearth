#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n, ans=INT_MAX;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n-1; i++){
            ans = min(ans,arr[i]^arr[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}
