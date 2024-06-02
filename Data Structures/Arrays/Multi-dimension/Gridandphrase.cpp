#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, count = 0;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 's'){
                if(i + 3 < n && arr[i + 1][j] == 'a' && arr[i + 2][j] == 'b' && arr[i + 3][j] == 'a'){
                    count++;
                }
                if(j + 3 < m && arr[i][j + 1] == 'a' && arr[i][j + 2] == 'b' && arr[i][j + 3] == 'a'){
                    count++;
                }
                if(i + 3 < n && j + 3 < m && arr[i + 1][j + 1] == 'a' && arr[i + 2][j + 2] == 'b' && arr[i + 3][j + 3] == 'a'){
                    count++;
                }
                if(i - 3 >= 0 && j + 3 < m && arr[i - 1][j + 1] == 'a' && arr[i - 2][j + 2] == 'b' && arr[i - 3][j + 3] == 'a'){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}