#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long a,b;
        cin >> a >> b;
        if((a&1) != (b&1))
        {
            cout << "NO\n";
            continue;
        }
        if(a < b*b)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }

    return 0;
}
