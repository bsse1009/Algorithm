/* Reading books easy version */

#include <bits/stdc++.h>

using namespace std;

vector<int>a,b,ab;

int main (void)
{
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int a1,b1,c;
        cin >> a1 >> b1 >> c;
        if (c && b1){
            ab.push_back(a1);
            continue;
        }
        if(b1 && !c){
            a.push_back(a1);
            continue;
        }
        if(c && !b1)
        {
            b.push_back(a1);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int sz = min(a.size(), b.size());
    for(int i = 0; i < sz; i++)
    {
        ab.push_back(a[i]+b[i]);
    }
    sz = ab.size();
    if(sz < k){ cout << -1 << endl; return 0;}
    sort(ab.begin(), ab.end());
    int ans = 0;
    for(int i = 0; i < k; i++) ans += ab[i];
    cout << ans << endl;

    return 0;
}
