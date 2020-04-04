
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
vector <ll> v[MAXN];
bitset<MAXN> visited;
int previus[MAXN];

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.c","r",stdin); freopen("output.c","w",stdout);}

/* ------------------main section-------------! */

ll solve(ll s) {
    ll ans = 10000000;
    queue<ll>q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        int sz = v[u].size();
        REP(i,sz)
        {
            int tem = v[u][i];
            if(visited[tem] && tem != previus[u] && previus[tem] == previus[u]){
                int tem_ans = v[previus[u]].size()+ sz + v[tem].size()-6;
                if(tem_ans < ans) ans = tem_ans;
                //cout << "HELLo\n";
            }
            else if(!visited[tem]){
                visited[tem] = 1;
                q.push(tem);
                previus[tem] = u;
                //cout << "Hi\n";
            }
        }
    }
    return ans;
}

void run() {
    fastio;
    cin >> n >> m;
    REP(i,n)
    {
        v[i].clear();
        visited[i] = 0;
        previus[i] = 0;
    }
    REP(i,m)
    {
        ll a,b;
        cin >> a >> b;
        a--; b--;
        v[a].pb(b);
        v[b].pb(a);
    }
    ll mini = 10000000;
    REP(i,n){
        if(!visited[i]){
            int x = solve(i);
            if(x < mini) mini = x;
        }
    }
    if(mini == 10000000) cout << -1 << endl;
    else cout << mini;
    return;
}


int main() {
	run();
	return 0;
}
