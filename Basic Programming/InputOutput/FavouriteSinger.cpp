#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, m = 0, r = 0;
	cin >> n;
	unordered_map<long long, int> have;
	for(; n ; --n) 
    {
		long long x;
		cin >> x;
		m = max(m, ++have[x]);
	}
	for(const auto& p : have) 
    {
		if(p.second == m) 
			++r;
	}
	cout << r << "\n";
	return 0;
}