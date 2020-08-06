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
		long long x,y,z;
		cin >> x >> y >> z;
		if(x != y && x!=z  && y != z) cout << "NO\n";
		else if(x == y && y == z) cout << "YES\n" << x << " " << x << " " << x << endl;
		else{
			if(x == y && z < x) cout << "YES\n" << x << " " << z << " " << 1 << endl;
			else if(x == z && y < x) cout << "YES\n" << x << " " << y << " " << 1 << endl;
			else if(y == z && x < y) cout << "YES\n" << x << " " << y << " " << 1 << endl;
			else cout << "NO\n";
		}

	}
	return 0;
}
