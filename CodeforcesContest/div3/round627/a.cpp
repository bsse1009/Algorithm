#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        long long x1 = 0, x2 = 0;
        cin >> a >> b >> c;
        double p2 = c/(b*1.0);
        if(a >= c) {x1 = -1; x2 = b;}
        else if (p2 >= a){ x2 = -1; x1 = 1;}
        else{
            x1 = 1;
            x2 = b;
        }
        cout << x1 << " " << x2 << endl;
    }

    return 0;
}
