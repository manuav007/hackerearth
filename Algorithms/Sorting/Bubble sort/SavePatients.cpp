#include <iostream>
using namespace std;
void bubble(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1; 
            }
        }
        if (flag == 0) {
            break;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr1[1001], arr2[1001];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> arr2[j];
    }
    bubble(arr1, n);
    bubble(arr2, n);
    for (int i = 0; i < n; i++) {
        if (arr1[i] <= arr2[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}