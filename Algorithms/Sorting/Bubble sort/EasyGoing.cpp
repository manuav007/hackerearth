#include <iostream>
using namespace std;
void bubble(int arr[], int n){
    for (int i=0; i<n; i++){
        int flag=0;
        for (int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    
}
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        int arr[1001];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bubble(arr,n);
        int minSum = 0, maxSum = 0;
        for (int i = 0; i < n - m; i++) {
            minSum += arr[i];
        }
        for (int i = m; i < n; i++) {
            maxSum += arr[i];
        }
        cout << maxSum - minSum << endl;
    }
    return 0;
}