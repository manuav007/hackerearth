#include <iostream>
#include <algorithm>
using namespace std;

int boder(char arr[1001][1001], int n, int m) {
    int maxcount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '#') {
                count++;
                maxcount = max(maxcount, count);
            } else {
                count = 0;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == '#') {
                count++;
                maxcount = max(maxcount, count);
            } else {
                count = 0;
            }
        }
    }
    return maxcount;
}

int main() {
    int t;
    cin >> t;
    for (int i=0 ; i<t; i++) {
        int n, m;
        cin >> n >> m;

        char matrix[1001][1001];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        int maxBorder = boder(matrix, n, m);
        cout << maxBorder << endl;
    }

    return 0;
}