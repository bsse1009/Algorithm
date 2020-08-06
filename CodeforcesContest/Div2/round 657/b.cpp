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
		long long l,r,m;
		cin >> l >> r >> m;
		long long k = r-l;
		long long a,b,c;
		for(int i = l; i <= r; i++)
		{
			long long x1,x2;
			if(m%i == 0)
			{
				a = i;
				b = l;
				c= l;
				break;
			}
			x1 = m - (m/i)*i; x2 = ((m/i)+1)*i - m;
			//cout << x1 << " " << x2 << endl;
			long mn = min(x1,x2);
			if(mn > k) continue;
			a = i;
			if(x1 < x2 ) {
				if(m <= mn){
					if(x2 > k) continue;
					else{
						b = l;
						c = b+x2;
						break;
					}
				} 
				c = l;
				b= c+mn;
			}
			else{
				b = l;
				c = b+mn;
			}
			break;
		}
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}