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
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		vector<int>pos;
		int cont = 0;
		for(int i = 0; i < n; i++)
		{
			if(s1[i] != s2[i]){
				cont++;
				pos.push_back(i+1);
			} 
		}
		cout << 3*cont << " ";
		for(int i= cont-1; i >=0; i--)
		{
			cout << pos[i] << " " << 1 << " " << pos[i] << " ";
		}
		cout << endl;

	}

}