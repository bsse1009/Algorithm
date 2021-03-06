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

const int MAXN = 1005;
ll n,k;
ll arr[MAXN];
ll color[MAXN];
int divisor[] = {2,3,5,7,11,13,17,19,23,29,31};

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.c","r",stdin); freopen("output.c","w",stdout);}

/* ------------------main section-------------! */

ll solve() {
    ll ans = 0;

    return ans;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        REP(i,n)
        {
            cin >> arr[i];
            color[arr[i]] = -1;
        }
        ll m = 1;
        REP(i,n-1){
            if(color[arr[i]] != -1) continue;
            for(int j = i+1; j < n; j++)
            {
                if(gcd (arr[i],arr[j]) > 1)
                {
                    color[arr[i]] = m;
                    color[arr[j]] = m;
                    m++;
                    continue;
                }
            }
        }
        REP(i,n){
            if(color[arr[i]] == -1) { color[arr[i]] = m; m++;}
        }
        cout << m-1 << endl;
        REP(i,n) cout << color[arr[i]] << " ";
        cout << endl;
    }
}



int main() {
	run();
	return 0;
}

