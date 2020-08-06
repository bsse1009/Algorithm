#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long a,b,n,m;
        cin >> a >> b >> n >> m;
        if((a+b) < (n+m) || m > min(a,b)) cout << "No\n";
        else cout << "Yes\n";
    }
}
