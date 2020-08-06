#include <bits/stdc++.h>

using namespace std;

long long n,q;
long long arr[10000009];

int main (void)
{
    cin >> n >> q;
    while(q--)
    {
        long long a,b,k;
        cin >> a >> b >> k;
        arr[a-1] += k;
        arr[b] -=k;
    }
    long long mx = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum > mx) mx = sum;
    }

    cout << mx << endl;
}
