#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m));
        vector<unordered_map<char, int>> row_count(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
                row_count[i][arr[i][j]]++;
            }
        }
        string s;
        cin >> s;
        bool possible = true;
        for(int i = 0; i < s.size(); i++) {
            int row = i % n;
            char current_char = s[i];
            bool found = false;
            for (int j = 0; j < m; j++) {
                if (arr[row][j] == current_char && row_count[row][current_char] > 0) {
                    row_count[row][current_char]--;
                    found = true;
                    break;
                }
            }   
            if (!found) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
