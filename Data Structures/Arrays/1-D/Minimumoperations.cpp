#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int arr[n];
    cin >> arr[0];
    int count = 1;
    for(long int i=1; i<n; i++){
        cin >> arr[i];
        if(arr[i-1] != arr[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}