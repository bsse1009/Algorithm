#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >>n;
        if (n%4) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
