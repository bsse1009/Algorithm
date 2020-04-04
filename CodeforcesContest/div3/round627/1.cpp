#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        bool flag = true;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n-1; i++)
        {
            int diff = abs(arr[i] - arr[i+1]);
            if (diff % 2)
            {
                cout << "NO\n";
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
    }
    return 0;
}
