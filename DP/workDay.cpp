#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int test;
    cin >> test;
    while(test--)
    {
        long long int n,g,b,total = 0;
        cin >> n >> g >> b;
        long long k = ceil(n/2.0);
        cout<<max(n,((n+1)/2)+(long long)(ceil(((n+1)/2)/(g*1.))-1)*b )<<endl;

    }
}
