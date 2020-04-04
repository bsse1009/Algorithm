#include <bits/stdc++.h>

using namespace std;

long long dp[1000];

long long way (int n)
{
    if (n == 0 || n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = way(n-1)+way(n-2);
}

int main (void)
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    cout << way(n) << endl;
    /*

    long long table[n+1] = {0};
    table[0] = table[1] = 1;
    for (int i = 2; i < n+1; i++)
    {
        table[i] = table[i-1] + table[i-2];
    }
    cout << table [n] << endl;

    */
}
