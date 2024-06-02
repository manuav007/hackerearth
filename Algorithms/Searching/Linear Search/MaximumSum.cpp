#include <iostream>
#include <limits>
int main() {
    int n;
    std::cin >> n;
    int arr[100000];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int count = 0;
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
            count += 1;
            total_sum += arr[i];
        }
    }
    if (count > 0) {
        std::cout << total_sum << " " << count << std::endl;
    } else {
        int max_element = std::numeric_limits<int>::min();
        for (int i = 0; i < n; ++i) {
            if (arr[i] > max_element) {
                max_element = arr[i];
            }
        }
        std::cout << max_element << " 1" << std::endl;
    }
    return 0;
}
