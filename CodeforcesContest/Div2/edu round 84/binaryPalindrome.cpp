#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        string s;
        int counter = 0;
        cin >> n;
        int odd = 0, bad = 0;
        while(n--)
        {
            int count1 = 0, count0 = 0;
            cin >> s;
            int l = s.length();
            for (int i = 0; i < l; i++)
            {
                if (s[i] == '0')
                    count0++;
                else
                    count1++;
            }
            if (l%2 == 0)
            {
                if(count0%2 == 0)
                    counter++;
                else
                    bad++;
            }
            else{
                counter++;
                odd++;
            }

        }
        if (odd == 0 && bad % 2 != 0)
            bad--;
        cout << counter+bad << endl;
    }
}
