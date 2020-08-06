#include <bits/stdc++.h>

using namespace std;

vector <long long>arr;

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
		arr.clear();
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			arr.push_back(x);
		}
		int cont = 0;
		bool flag = 1;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] == 1){
				cont++;
				if(i == n-1) flag = 0;
			}
			else break;
		}
		if(cont%2 == 0)
		{
			if(flag) cout << "First\n";
			else cout << "Second\n";
		} 
		else{
			if(!flag) cout << "First\n";
			else cout << "Second\n";
		}

	}

}