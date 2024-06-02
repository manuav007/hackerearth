#include <iostream>
#include <vector>
int findMinimumElement(const std::vector<int>& arr) {
    int minElement = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        int minElement = findMinimumElement(arr);
        std::cout << minElement << std::endl;
    }
    return 0;
}