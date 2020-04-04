#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> PII;
vector <PII> vec;

bool comp (PII a, PII b)
{
    return (b.first * a.second) > (a.first * b.second);
}

void fractional_knapsack()
{
    int n,w;
    cin >> n;
    int t = n;
    while(t--)
    {
        int weight, price;
        cin >> weight >> price;
        vec.push_back(PII(weight,price));
    }

    sort (vec.begin(), vec.end(),comp);
    cin >> w;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "hello" << endl;
        int z = min (w,vec[i].first);
        w -= z;
        ans += z*vec[i].second;

    }

    cout << ans << endl;

}

int main (void)
{
    fractional_knapsack();
    return 0;
}
