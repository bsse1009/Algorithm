#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define MP make_pair
#define SZ(v) ((int)(v).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n) FORE(i,0,n)
#define FORSZ(i,a,v) FOR(i,a,SZ(v))
#define REPSZ(i,v) REP(i,SZ(v))

typedef long long ll;
ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }

const int MAXN = 200000;

int n;
int a[MAXN];
int b[MAXN];

int c[MAXN];

ll solve() {
    ll n0 = 0,n1 = 0,n2 = 0;
    ll ans = 0;
	REP(i, n)
	{
	    c[i] = a[i] - b[i];
	    if (c[i] == 0) n0++;
	    else if(c[i] > 0) n1++;
	    else n2++;
	}
	sort(c, c + n);
	ans += ((n1*(n1-1))/2) + (n0*n1);
	REP(i,n2){
        if(binary_search(c, c+n, abs(c[i])))
            ans += (n - (upper_bound(c, c+n, abs(c[i]))-c));
        else
            ans += (n - (lower_bound(c, c+n, abs(c[i]))-c));
	}
	return ans;
}

void run() {
	scanf("%d", &n);
	REP(i, n) scanf("%d", &a[i]);
	REP(i, n) scanf("%d", &b[i]);
	printf("%lld\n", solve());
}


int main() {
	run();
	return 0;
}
