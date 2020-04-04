#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int test;
    cin >> test;
    while(test--)
    {
        string a,b,c;
        cin >> a >> b >> c;
        bool flag = 0;
        int length = a.length();
        for (int i = 0; i < length; i++)
        {
            if (a[i] != b[i])
            {
                if ((a[i] == c[i]) || (b[i] == c[i]) )
                {
                    flag = 1;
                    continue;
                }

                else
                {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            }
            else{
                if (a[i] == c [i])
                {
                    flag = 1;
                    continue;
                }

                else{
                     cout << "NO" << endl;
                     flag = 0;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}
