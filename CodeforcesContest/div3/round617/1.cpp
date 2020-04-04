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
#define FORSZ(i,a,v) FOR(i,a,SZ(v))
#define REPSZ(i,v) REP(i,SZ(v))

typedef long long ll;
ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }
ll n;
const int MAXN = 200000;
ll arr[MAXN];


void solve() {
    ll odd = 0, even = 0;
    REP(i,n) {
        if(arr[i]%2)
            odd++;
        else
            even++;
    }
    if(odd > 0 && even > 0)
        cout << "YES\n";
    else if (even > 0)
        cout << "NO\n";
    else if(odd > 0)
    {
        if(!(odd%2))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

void run() {
    fastio;
    //freopen("input.txt","r", stdin);
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        REP(i,n)
            cin >> arr[i];
        solve();
    }



}


int main() {
	run();
	return 0;
}

