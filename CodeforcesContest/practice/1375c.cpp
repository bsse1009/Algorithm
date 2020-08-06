#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(arr[0] < arr[n-1]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
