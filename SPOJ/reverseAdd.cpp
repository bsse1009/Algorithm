#include <bits/stdc++.h>

using namespace std;

long long reverseInt(long long a)
{
    long long reva = 0;
    while (a != 0)
    {
        int remainder = a % 10;
        reva = reva * 10 + remainder;
        a /= 10;
    }
    return reva;
}

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long a,b;
        cin >> a >> b;
        cout << reverseInt(reverseInt(a)+reverseInt(b)) << endl;
    }
}
