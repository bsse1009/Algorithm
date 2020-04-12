#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;

ll A[100005];
ll n,q;

ll BinarySearch(ll x)
{
    ll low = 0, high = n-1;
    ll result = -1;
    while(low <= high)
    {
        ll mid = (low+high)/2;
        if (A[mid] == x) result = mid, high = mid-1;
        else if (A[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

int main (void)
{
    scanf("%lld %lld",&n,&q);
    for (int i = 0; i < n; i++) scanf("%lld",&A[i]);
    for (int i = 0; i < q; i++)
    {
        ll x;
        scanf("%lld", &x);
        printf("%lld\n",BinarySearch(x));
    }

    return 0;
}
