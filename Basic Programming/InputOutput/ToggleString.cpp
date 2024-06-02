#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    string c;
    for(auto ch : s){
        if(isupper(ch)){
            c+=tolower(ch);
        }
        else{
            c+=toupper(ch);
        }
    }
    cout << c;
}