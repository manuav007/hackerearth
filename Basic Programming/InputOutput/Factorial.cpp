#include <iostream>
using namespace std;
int main() {
    int N;
    std::cin>>N;
    int result = 1;
    for(int i=1; i<=N; i++){
        result*=i;
    }
    cout<<result;
    return 0;
}
