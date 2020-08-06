#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int count0 = 0, count1 = 0;
        for(int i = 0; i < l; i++)
        {
            if(s[i] == '0') count0++;
            else count1++;
        }
        int mx = min(count0, count1);
        if(mx%2) cout << "DA" << endl;
        else cout << "NET\n";
    }
    return 0;
}
