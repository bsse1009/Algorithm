#include <bits/stdc++.h>

using namespace std;

long long arr[200005];

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n, k;
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%k == 0) arr[i] = 0;
            else{
                arr[i] = k - arr[i]%k;
            }
        }
        sort(arr, arr+n);
        int cont = 0, hi = 0, val = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == arr[i+1]) cont++;
            else{
                    if(cont >= hi && arr[i]!= 0) {
                        hi = cont;
                        val = arr[i];}
                    cont = 0;
            }
        }
        if(arr[n-1] == 0) cout << 0 << endl;
        else cout << val + hi*k + 1 << endl;
    }
    return 0;
}
