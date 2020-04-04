#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int m = 0, h = 0;
        for (int i =0; i < l; i++)
        {
            if (s[i] == '1'){
                m = i;
                break;
            }
        }

        for (int j =l-1; j >= 0; j--)
        {
            if (s[j] == '1'){
                h = j;
                break;
            }
        }
        //cout << h << " " << m << " " << l << endl;
        string sub = s.substr(m,h-m+1);
        //cout << sub << endl;

        int res = 0;
        bool flag = 0;
        for (int i = 0; i < sub.length(); i++)
        {
            if (sub[i] == '0')
                res++;
            else
                flag = 1;
        }
        if (flag)
            cout << res << endl;
        else
            cout << 0 << endl;

    }
    return 0;
}
