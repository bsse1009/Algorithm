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

const int MAXN = 100005;
ll n,k;
ll a[MAXN];
ll b [MAXN];

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */
bool finds(set<int>s, int x)
{
    set <int> :: iterator itr;
    for (itr = s.begin(); itr != s.end(); ++itr)
    {
        if(*itr == x)
            return true;
    }
    return false;
}

void solve() {
    if (a[0] != b [0]) {cout << "NO\n"; return;}
    set<int> s;
    for (int i = 1; i<n; i++)
    {
        s.insert(a[i-1]);
        if (a[i] != b[i])
        {
            if (a[i] < b[i]){
                    if(finds(s,1)) continue;
                    cout << "NO\n";
                    return;
            }
            if (a[i] > b[i]){
                    if(finds(s,-1))
                        continue;
                    cout << "NO\n";
                    return;
            }
        }
    }
    cout << "YES\n";

    return;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        REP(i,n) cin >> a[i];
        REP(i,n) cin >> b[i];

        solve();
    }

}


int main() {
	run();
	return 0;
}

