#include <bits/stdc++.h>

using namespace std;

int L,R;
bool isPrime[1000005];

void sieve()
{
    int n = R;
	memset(isPrime, 1, sizeof isPrime);
	isPrime[1] = 0;
	for(int i = 2; i*i <= n; i++)
	{
		if(!isPrime[i]) continue;
		else
		{
			for(int mul = i*2; mul <= n; mul += i)
				isPrime[mul] = 0;
		}
	}
}

int sumOfdigits(int n)
{
	int sum = 0;
	while(n)
    {
       sum += n%10;
       n/=10;
    }
	return sum;
}

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> L >> R;
		sieve();
		int cont = 0;
		for(int i = L; i <= R; i++)
		{
			if(isPrime[i]){
				if(isPrime[sumOfdigits(i)]) cont++;
			}
		}
		cout << cont << endl;
	}
	return 0;
}
