// perform the combo

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 2e5+5;

ll A[26];
ll B[MAXN];

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++) B[i] = 0;
        for(int i = 0; i < 26; i++) A[i] = 0;
        for(int i = 0; i < m; i++)
        {
            ll k;
            cin >> k;
            B[0]++;
            B[k]--;
        }
        ll mul = 1;
        for (int i = 0; i < n; i++)
        {
            mul += B[i];
            A[s[i]-'a'] += mul;
        }

        for (int i = 0; i < 26; i++) cout << A[i] << " ";
        cout << endl;
    }
}
