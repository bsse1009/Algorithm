#include <bits/stdc++.h>

using namespace std;

long long arr[1000005];

int main (void)
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        long long mx = 0, curr = 0;
        long long res = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '-') curr--;
            else curr++;
            if(curr < mx)
            {
                mx = curr;
                res += (i+1);
            }
        }
        res += n;
        cout << res << endl;
    }
}


