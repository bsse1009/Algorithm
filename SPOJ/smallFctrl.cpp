#include <bits/stdc++.h>

using namespace std;

long long factorial (int n)
{
    long long f = n;
    while(--n)
    {
        f*=n;
    }
    return f;
}

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}
