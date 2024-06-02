#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int c = 0; c < t; c++) {
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int p1=0,p2=n-1;
        while(a[p1]==b[p1]){
            p1++;
        }
        while(a[p2]==b[p2]){
            p2--;
        }
        cout << (p2-p1)+1 << endl;
    }
    return 0;
}