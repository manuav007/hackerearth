#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, a = 0, toughQ = 0, num;
	cin >> n >> x;
	while(n--)
	{
		cin >> num;
		if(num > x)
			toughQ++;
		if(num <= x)
			a++;
		if(toughQ == 2)
			break;
	}
	cout << a << endl;
}
