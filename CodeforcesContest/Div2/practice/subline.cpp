#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--)
	{
		long long n,x;
		vector<long long> v;
		cin >> n >> x;
		for(int i = 0; i < n; i++)
		{
			long long p;
			cin >> p;
			v.push_back(p);
		}
		sort(v.begin(),v.end());
		long long mul = 1;
		long long ans = 0;
		for(int i = n-1; i >= 0; i--)
		{
			if(v[i]*mul >= x){
				ans++;
				mul = 1;
				continue;
			}
			mul++;
		}
		cout << ans << endl;

	}
	return 0;
}
