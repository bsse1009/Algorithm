#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define pf printf
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
#define pll pair <ll, ll>

ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }

const int MAXN = 200000;
ll n,m;
vector<ll> v;
vector<ll> tem;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

ll solve() {
    ll counter = 0;

    ll start = 0, last = n-1;

    while(start < last)
    {
        if(v[start] == tem[start]) start++;
        if(v[last] == tem[last]) last--;
        if(v[start] != tem[start] && v[last] != tem[last]) break;
    }
    if(last < start) return 0;

    for(int i = start; i <= last; i++)
        if(v[i] == tem[i]) counter++;
    if(counter == 0) return 1;
    if(counter == (last-start+1)) return 0;
    else return 2;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        v.clear();
        tem.clear();
        REP(i,n)
        {
            ll a;
            cin >> a;
            v.pb(a);
            tem.pb(a);
        }
        sort(v.begin(), v.end());
        cout << solve() << endl;
    }

}


int main() {
	run();
	return 0;
}

