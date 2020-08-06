#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag0 = true;
        string ans = "";
        string temp = "";
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0' && flag0) ans += s[i];
            else if (s[i] == '0' && !flag0){
                temp = "0";
            }
            else if (s[i] == '1')
            {
                temp += s[i];
                flag0 = false;
            }
        }
        ans += temp;
        cout << ans << endl;
    }
}
