#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int l;
    cin >> l;
    int n;
    cin >> n;
    for (int c = 0; c < n; c++) {
        long long int w,h;
        cin >> w >> h;
        if (w>=l && h>=l && w==h){
            cout << "ACCEPTED" << endl;
        }
        else if(w>=l && h>=l){
            cout << "CROP IT" << endl;
        }
        else{
            cout << "UPLOAD ANOTHER" << endl;
        }
    }
    return 0;
}
