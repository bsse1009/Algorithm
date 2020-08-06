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
const ll maxn = 100005;
ll n,m,k;
vector<ll> arr(maxn,0);
vector<ll> pre(maxn,0);

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

void solve() {
    cout<< "hello";
}


void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        arr.clear();
        pre.clear();
        cin >> n >> m >> k;
        REP(i,n)
        {
            ll x;
            cin >> x;
            arr.pb(x);
        }
        pre[0] = arr[0];
        FOR(i,1,m+1)
        {
            pre[i] = arr[i]+pre[i-1];
            //cout << pre[i] << " ";
        }
        ll mx = pre[m];
        ll c = 1;
        for(int i = m-1; i > 0; i--)
        {
            if(c > 2*k) break;
            ll tem = pre[i];
            ll x1 = arr[i], x2 = arr[i-1];
            if(c%2) {
                ll m1 = c/2, m2 = c-m1;
                tem += m1*x1 + m2*x2;
            }
            else{
                tem += (c/2)*(x1+x2);
            }
            mx = max(mx,tem);
            c++;
        }
        cout << mx << endl;

    }

}


int main() {
    #ifndef ONLINE_JUDGE
        from_file();
    #endif
    run();
    return 0;
}
