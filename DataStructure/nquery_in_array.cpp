#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll A[1000],B[1000];

int main (void)
{
    ll n,nQuery;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> nQuery;
    for (int i = 0; i < nQuery; i++)
    {
        ll left,right,x;
        cin >> left >> right >> x;
        left--;
        right--;
        B[left] += x;
        B[right+1] -= x;
    }

    ll auxB = 0;
    for (int i = 0; i < n; i++)
    {
        auxB += B[i];
        A[i] += auxB;
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
