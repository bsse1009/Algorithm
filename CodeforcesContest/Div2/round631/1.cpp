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

ll n,m,k;
vector<ll> arr;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

void solve() {

}


void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        arr.clear();
        cin >> n >> m >> k;
        REP(i,n)
        {
            ll x;
            cin >> x;
            arr.pb(x);
        }
        ll ans = arr[0]+arr[1];
        ll i = 1;
        m--;
        while(m)
        {
            if(arr[i+1] >= arr[i-1])
            {
                if(m && i<n-1){
                    m--;
                    ans += arr[i+1];
                    i++;
                    continue;
                }
            }
            if(arr[i-1] >= arr[i+1])
            {
                if(k && i>0){
                    k--;
                    m--;
                    ans += arr[i-1];
                    i--;
                    continue;
                }
            }
            if(m){
                m--;
                ans+=arr[i+1];
                i++;
                continue;
            }

        }
        cout << ans << endl;
    }

}


int main() {
    #ifndef ONLINE_JUDGE
        from_file();
    #endif
    run();
    return 0;
}
