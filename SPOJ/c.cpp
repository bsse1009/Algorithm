#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int arr[26] = {0};
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int wrong[m+1];
        for (int i = 0; i < m; i++)
        {
            cin >> wrong[i];
        }
        wrong[m] = n;
        for (int i = 0; i < m+1; i++)
        {
            for(int j = 0; j < wrong[i]; j++)
            {
                arr[s[j]-'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
