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
ll n;

string solve() {

}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        cout << 1 << " " << n-1 << endl;
    }

}


int main() {
	run();
	return 0;
}
