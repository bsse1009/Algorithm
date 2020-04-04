#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    string s;
    cin >> s;
    string v = "AEIOU";
    int counter = 0;
    int l = s.length();
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if(v[i] == s[j])
            {
                counter++;
                break;
            }
        }
    }
    if(s[0] == 'H' && s[1] == 'O')
        counter++;

    if(counter & 1)
        cout << counter << " NO" << endl;
    else
        cout <<counter << " YES" << endl;
    return 0;
}
