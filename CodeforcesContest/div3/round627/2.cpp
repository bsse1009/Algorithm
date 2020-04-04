#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        bool flag = false;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+2; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    cout << "YES\n";
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

        if (!flag)
            cout << "NO\n";
    }
    return 0;
}
