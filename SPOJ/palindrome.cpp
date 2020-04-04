#include <bits/stdc++.h>

using namespace std;

bool check_palindrome(long long p)
{
    long long tem = p;
    long long rev = 0;
    while(tem)
    {
        rev = rev*10 + tem%10;
        tem/=10;
    }
    //cout << rev << endl;
    if (rev == p) return 1;
    else return 0;
}

int main (void)
{
    long long n,counter = 0,i=0;
    cin >> n;
    while(counter != n)
    {
        i++;
        if(check_palindrome(i))
        {
            //cout << i << endl;
            //cout << check_palindrome(i) << endl;
            counter++;
        }

    }

    cout << i << endl;
}
