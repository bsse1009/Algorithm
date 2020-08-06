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
		vector <long long> arr;
		for(int i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			arr.push_back(x);
			//cout << arr[i] << " ";
		}
		int op1 = 0,op2 = 0;
		int mid= 0;
		for(int i = n-1; i >= 1; i--)
		{
			if(arr[i] >= arr[i-1]) {
				op1++;
			}
			else {
				break;
			}
		}

		for(int i = n-1; i >= 1; i--)
		{
			if(arr[i] <= arr[i-1]) {
				op2++;
			}
			else {
				mid  = i;
				break;
			}
		}
		if(op2)
		{
			for(int i = mid; i >= 1; i--)
			{
				if(arr[i] >= arr[i-1]) {
					op2++;
				}
				else {
					break;
				}
			}
		}
		int op = max(op1, op2)+1;
		cout << n - op << endl;
	}
	return 0;
}
