#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w", stdout);
	#endif
	int tc;
	cin >> tc;
	while(tc--)
	{
		long long n;
		cin >> n;
		if(n == 1) {
			cout << "FastestFinger\n";
			continue;
		}

		if(n == 2 || n%2) {
			cout << "Ashishgup\n";
			continue;
		}

		else
		{
			if(n == 4 || n == 6 || n == 8 || n == 10) cout << "FastestFinger\n";
			else if((n%4 == 0 && (n/4)%2) || (n%6 == 0 && (n/6)%2) || (n%8==0 && (n/8)%2) || (n%10==0 && (n/10)%2)) cout << "Ashishgup\n";
			else cout << "FastestFinger\n";
		}
	}
	return 0;
}