#include <iostream>
using namespace std;

int bubble(int arr[],int num) {
    int count = 0;
	int n = sizeof(arr);
    bool swapped = true;

    while (swapped) {
        swapped = false;
        count = count + 1;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    }
    return count;
}

int main() {
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int a = bubble(arr, num);
    cout << a ;

    return 0;
}
