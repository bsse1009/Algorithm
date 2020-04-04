#include <bits/stdc++.h>

using namespace std;

int coin[1000];
bool possible[1000000];

bool makeCoin(int n, int k)
{
    possible[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(i >= coin[j])
                possible[i] |= possible[i - coin[j]];
        }
    }
    return possible[n];
}

int main ()
{
    int k,n;
    cin >> k >> n;
    for (int i = 0; i < k; i++)
        cin >> coin[i];

    for (int i = 0; i <= n; i++)
        possible[i] = 0;

    cout << makeCoin(n,k) << endl;


}
