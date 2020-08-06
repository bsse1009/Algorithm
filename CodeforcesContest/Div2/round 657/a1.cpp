#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w", stdout);
	#endif
	int b,k;
	cin >> b >> k;
	int cont = 0;
	bool last = 0;
	for(int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		if(x%2) cont++;
		if(i == k-1) last = x%2;
	}

	if(b%2)
	{
		if(cont%2) cout << "odd\n";
		else cout << "even\n";
	}
	else{
		if(last) cout << "odd\n";
		else cout << "even\n";
	}
	return 0;
}
