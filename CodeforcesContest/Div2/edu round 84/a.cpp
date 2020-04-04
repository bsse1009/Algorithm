#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        string s = "";
        cin >> n;
        string last = "89";
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        n -= 2;
        while(n--)
        {
            s += "3";
        }
        s += last;
        cout << s << endl;
    }
}
