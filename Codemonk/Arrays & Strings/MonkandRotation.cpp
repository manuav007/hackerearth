#include<bits/stdc++.h>
using namespace std; 
int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		long long n, k;
		cin >> n >> k;
		long long a[n], ans[n] = {0};
		for(long long i = 0; i < n; i++)
			cin >> a[i];
		for(long long i = 0; i < n; i++)
		{
			long long h = (i + k) % n;
			ans[h] = a[i];
		}
		for(long long i = 0; i < n; i++)
			cout << ans[i] << " ";
		cout << "\n";
	}	
}
