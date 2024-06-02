#include <iostream>
#include <vector>
using namespace std;

void rightrotate(vector<vector<long long int>>& mat, int N) {
    vector<vector<long long int>> rotated(N, vector<long long int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rotated[j][N - 1 - i] = mat[i][j];
        }
    }
    mat = rotated;
}

void leftrotate(vector<vector<long long int>>& mat, int N) {
    vector<vector<long long int>> rotated(N, vector<long long int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rotated[N - 1 - j][i] = mat[i][j];
        }
    }
    mat = rotated;
}

int main() {
    int n;
    cin >> n;
    vector<vector<long long int>> arr(n, vector<long long int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    string s;
    cin >> s;
    int r = 0, l = 0;
    
    for (char c : s) {
        if (c == 'R') {
            r++;
        } else {
            l++;
        }
    }

    int net_rotations = (r - l) % 4;
    if (net_rotations < 0) {
        net_rotations += 4; 
    }

    for (int i = 0; i < net_rotations; i++) {
        rightrotate(arr, n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}