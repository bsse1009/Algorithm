#include <bits/stdc++.h>

using namespace std;

#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n) FORE(i,0,n)
#define REPSZ(i,v) REP(i,SZ(v))

typedef long long ll;
ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }

const int MAXN = 200000;
ll n,k;


string solve() {
    string ans = "";
    ll at1 = n-2, at2 = n-1;
    if (k == 1)
    {
        REP(i,n-2) ans += "a";
        ans += "bb";
        return ans;
    }
    if (k == n*(n-1)/2)
    {
        ans += "bb";
        REP(i,n-2) ans += "a";
        return ans;
    }
    ll m = 1;
    while((m*(m+1)/2) < k)
    {
        m++;
    }
    at1 -= (m-1);
    at2 -= (k-(m*(m-1)/2)-1);
    REP(i,n){
        if(i == at1 || i == at2)
            ans += "b";
        else
            ans += "a";
    }
    return ans;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        cout << solve() << endl;
    }

}


int main() {
	run();
	return 0;
}
