#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int counter = 0;
        int maxi = 0;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'L'){
                counter++; continue;
            }
            if (s [i] == 'R')
            {
                if (counter > maxi)
                    maxi = counter;
                counter = 0;
            }
        }
        if (counter > maxi)
            maxi = counter;
        cout << maxi+1 << endl;
    }
    return 0;
}
