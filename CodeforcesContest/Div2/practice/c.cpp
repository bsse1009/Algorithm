#include <bits/stdc++.h>

using namespace std;



int main (void)
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int arr[27] = {0};
        string s;
        cin >> s;
        int len = s.length();
        for(int i = 0; i < len-1; i++)
        {
            if(s[i] == s[i+1] )
            {
                i++;
            }
            else arr[s[i]-'a'] = 1;
        }
        if (s[len-1] != s[len-2]) arr[s[len-1]-'a'] = 1;

        for(int i = 0; i < 27; i++)
        {
            if(arr[i] == 1) cout << char('a'+i);
        }
        cout << endl;
    }
    return 0;
}
