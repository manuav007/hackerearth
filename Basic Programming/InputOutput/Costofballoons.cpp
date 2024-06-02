#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        long int c1;
        cin >> c1;
        long int c2;
        cin >> c2;
        long long int np;
        cin >> np;
        int arr[np];
        int ar[np];
        for (int j=0; j<np; j++){
            cin >> arr[j];
            cin >> ar[j];
        }
        long long int count1=0,count2=0;
        for (int j=0; j<np; j++){
            if(arr[j] == 1){
                count1++;
            }
            if(ar[j] == 1){
                count2++;
            }
        }
        long int mi1 = count1 * c1 + count2 * c2;
        long int mi2 = count1 * c2 + count2 * c1;
        cout << min(mi1, mi2) << endl;
    }
    return 0;
}