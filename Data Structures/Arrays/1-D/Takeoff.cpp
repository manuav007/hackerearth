#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int N,p,q,r,c=0,a=0;
        cin >> N >> p >> q >> r;
        for(int i=1; i<=N; i++){
            c = 0;
            if(i%p == 0){
                c++;
            }
            if(i%q == 0){
                c++;
            }
            if(i%r == 0){
                c++;
            }
            if(c == 1){
                a++;
            }
        }
        cout << a << endl;
    }
    return 0;
}