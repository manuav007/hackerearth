#include <iostream>
#include <vector>
using namespace std;
struct Fan {
    string name;
    int fan_quotient;
};
bool compareFans(const Fan& fan1, const Fan& fan2) {
    if (fan1.fan_quotient == fan2.fan_quotient) {
        return fan1.name > fan2.name;
    }
    return fan1.fan_quotient < fan2.fan_quotient;
}
void bubbleSort(vector<Fan>& fans, int N) {
    for (int i = 0; i < N; i++) {
        int flag = 0;
        for (int j = 0; j < N - i - 1; j++) {
            if (compareFans(fans[j], fans[j + 1])) {
                Fan temp = fans[j];
                fans[j] = fans[j + 1];
                fans[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}
void selectFans(int N, int T, vector<Fan>& fans) {
    bubbleSort(fans, N);
    for (int i = 0; i < min(T, N); i++) {
        cout << fans[i].name << endl;
    }
}
int main() {
    int N, T;
    cin >> N >> T;
    vector<Fan> fans(N);

    for (int i = 0; i < N; i++) {
        cin >> fans[i].name >> fans[i].fan_quotient;
    }

    selectFans(N, T, fans);

    return 0;
}