#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b;
        cin >> a >>b;
        int dif = abs(a-b);
        if (dif < 2)
            cout << abs(a-b) << endl;
        if (abs(a-b) % 2 == 0)
        {
            if (a > b)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if (abs(a-b) % 2 != 0)
        {
            if (a > b)
                cout << 1 << endl;
            else
                cout << 2 << endl;


        }
    }
}
