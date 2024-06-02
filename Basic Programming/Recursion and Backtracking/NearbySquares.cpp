#include <bits/stdc++.h>
using namespace std; 

long long f(long long int i, vector<long long int>& v, long long int a, long long int sum)
{
	if(i == -1)
		return abs((sum - a) * (sum - a) - a * a);
	return min(f(i - 1, v, a + v[i], sum), f(i - 1, v, a, sum));
}
 
int main()
{
	long long int t = 1;
	cin >> t;
	while(t--){
		long long int n, sum = 0;
        cin >> n;
        vector<long long int> v(n);
        for(long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        long long int ans = f(n - 1, v,  0, sum);
        cout << ans << endl;
	}
	return 0;
}
