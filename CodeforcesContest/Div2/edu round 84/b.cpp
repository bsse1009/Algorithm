#include <bits/stdc++.h>

using namespace std;

long long  a[200002];
long long  b[200002];
long long  x[200002];


int main (void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    x[0] = 0;
    a[0] = b[0] + x[0];
    cout << a[0] << " ";

    for (int i = 1; i < n; i++)
    {
        x[i] = max(x[i-1],a[i-1]);
        a[i] = b[i] + x[i];
        cout << a[i] << " ";
    }
    cout << endl;
}
