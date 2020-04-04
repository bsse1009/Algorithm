#include <bits/stdc++.h>

using namespace std;

long long prime [100000];
bool mark [100001];
long long nprime;
bool resultmark[10000001];

void seive (long long n)
{
    long long limit = sqrt(n*1.0)+2;
    mark[1] = 1;
    for (long long i = 4; i <= n; i+=2)
        mark [i] = 1;
    prime[nprime++] = 2;
    //cout << n << endl;
    for (long long i = 3; i <=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++] = i;
            if (i <= limit)
            {
                for (long long j = i*i; j <= n; j += i*2)
                {
                    mark[j] = 1;
                }

            }
        }
    }
}

void segmentSeive(long long low, long long high)
{
    long long i,limit = sqrt(high*1.0)+2;
    //cout << limit << endl;
    for (i = 0; i < limit ; i++)
    {
        if (prime[i] != 0)
        {
            long long ll = floor(low/prime[i])*prime[i];
            if (ll < low)
                ll += prime[i];
            //cout << ll << endl;
            for (ll; ll <= high; ll += prime[i])
            {
                //cout << ll-low << endl;
                if (ll != prime[i])
                    resultmark[ll - low] = true;
            }
        }

        else
            break;
    }

    for (long long i = low; i <= high; i++)
    {
        if(!resultmark[i-low])
            cout << i << endl;
    }



}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        long long n = sqrt(b*1.0)+2;
        //cout << n << endl;
        if (a == 1)
        {
            seive(b);
            for(long long i = 0; i < b; i++)
            {
                if (prime[i] != 0)
                    cout << prime[i] << endl;
                else
                    break;
            }
        }
        else{
                seive(n);
                segmentSeive(a,b);
        }
    }

}
