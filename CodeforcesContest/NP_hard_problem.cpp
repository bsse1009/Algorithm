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
vector<ll> v[MAXN];
int color [MAXN];
ll from[MAXN];
ll to[MAXN];
set<ll> s1,s2;
bool flag = 0;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.c","r",stdin); freopen("output.c","w",stdout);}

/* ------------------main section-------------! */

void solve(ll s) {
    stack<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll u = q.top();
        q.pop();
        REP(i,v[u].size())
        {
            ll tem = v[u][i];
            if(color[tem] == -1){
                color[tem] = (color[u]^1);
                q.push(tem);
            }
        }
    }
}

void run() {
    fastio;
    cin >> n >> m;
    REP(i,n){
        v[i].clear(); color[i] = -1;
    }
    REP(i,m)
    {
        ll a,b;
        cin >> a >> b;
        a--; b--;
        from[i] = a;to[i] = b;
        v[a].pb(b);
        v[b].pb(a);
    }
    REP(i,n){
        if(color[i] == -1){
            color[i] = 0; solve(i);
        }}
    REP(i,m){
        if(color[from[i]] == color[to[i]]){
            cout << -1 << endl; return;
        }
    }

    REP(i,n){
        if(color[i] == 0)
            s1.insert(i+1);
        else
            s2.insert(i+1);
    }
    cout << s1.size() << endl;
    print(s1);
    cout << s2.size() << endl;
    print(s2);
}


int main() {
	run();
	return 0;
}

