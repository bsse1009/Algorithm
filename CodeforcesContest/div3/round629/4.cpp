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
    ll ans = 0;
    bool all_same = 1;
    REP(i,n){
        if (arr[i] != arr[0])
            all_same = 0;
    }
    if(all_same){
        cout << 1 << endl;
        REP(i,n) cout << 1 << " ";
        cout << endl;
        return;
    }
    if(n%2 == 0)
    {
        cout << 2 << endl;
        REP(i,n)
        {
            if(i%2 == 0) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << endl;
        return;
    }

    REP(i,n){
        if(arr[i] == arr[(i+1)%n])
        {
            cout << 2 << endl;
            for(int j = 0; j < n; j++)
            {
                cout << 1 + (1 & ((j - i - 1 + n) % n)) << " ";
            }
            cout << endl;
            return;

        }
    }

    cout << 3 << endl;
    REP(i,n-1)
        {
            if(i%2 == 0) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << 3 << " " << endl;
        return;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        REP(i,n){
            cin >> arr[i];
        }
        solve();
    }
}


int main() {
	run();
	return 0;
}


