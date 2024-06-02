#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,k=0,sum=0;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i=0; i<n; i++){
        k=1;
        while(arr[i] == arr[i + 1] && i < n - 1){
            k++;
            i++;
        }
        k=(k*(k-1))/2;
        sum= sum + k;
    }
    cout << sum << endl;
    return 0;
}
