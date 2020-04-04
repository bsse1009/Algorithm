#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n;
        cin >> n;
        long long counter = 0;
        int i = 1;
        while(1)
        {
            long long k = (n / pow(5,i));
            if (k < 1)
                break;
            else{
                counter+=k;
                i++;
            }
        }
        cout << counter << endl;
    }

    return 0;
}
