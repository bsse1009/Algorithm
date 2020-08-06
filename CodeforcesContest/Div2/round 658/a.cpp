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
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		bool flag = 0;
		for(int i = 0; i < n; i++)
		{
			flag = 0;
			for(int j = 0; j < m; j++)
			{
				if(a[i] == b[j]){
					cout <<"YES\n" <<  1 << " " << a[i] << endl;
					flag= 1;
					break;
				} 
			}
			if(flag) break;
		}
		if(!flag) cout << "NO\n";
	}

}