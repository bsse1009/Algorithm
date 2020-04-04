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

const int MAXN = 200002;
ll n;
ll arr[MAXN];
ll b[MAXN];
ll c [MAXN];
vector <pll> v;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

bool perm(int a, ll i, ll e) {
    if(a == 1)
    {

    }
    return ans;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        v.clear();
        REP(i,n)
            cin >> arr[i];
        REP(i,n)
        {
            REP(j,i+1)
                b[j] = arr[j];
            for(int j = i+1; j < n; j++ )
                c[j-i+1] = arr[j];
            if(perm(1,0,i+1) && perm(2,i+1,n))
            {
                ans++;
                v.pb(mp(i+1,n-i-1));
            }
        }

        cout << ans << endl;
        print(v);
    }

}


int main() {
	run();
	return 0;
}

