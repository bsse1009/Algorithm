#include<bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[3*n];
        for (int i = 0; i < 3*n; i++)
        {
            cin >> arr[i];
        }
        sort (arr, arr+3*n);
        int sum = 0;
        int i = 0;
        for (int j = 3*n-2; j >= 0; j-=2)
        {
            i++;
            sum += arr[j];
            if (i == n) break;
        }

        cout << sum << endl;
    }
    return 0;
}

