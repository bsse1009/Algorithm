#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w", stdout);
	#endif
		
	int n;
  string s;
  for(int i = 0; i < n; i++)
  {
    cin >> s;
    mp[s] = mp[s]+1;
  }
  cout << "AC " << "x " << mp["AC"] << endl;
  cout << "WA " << "x " << mp["WA"] << endl;
  cout << "TLE " << "x " << mp["TLE"] << endl;
  cout << "RE " << "x " << mp["RE"] << endl;
  return 0;
	return 0;
}
