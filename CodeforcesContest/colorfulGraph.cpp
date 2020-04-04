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
vector<ll> v[101][101];
bitset<101>visited;
bitset<101> color;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.c","r",stdin); freopen("output.c","w",stdout);}

/* ------------------main section-------------! */

bool solve(ll a, ll b, ll c) {
    stack<ll>q;
    REP(i,n+1) visited[i] = 0;
    q.push(a);
    visited[a] = 1;
    while(!q.empty())
    {
        ll u = q.top();
        q.pop();
        REP(i,v[u][c].size())
        {
            ll tem = v[u][c][i];
            //cout << c << " " << tem  << " Debug"<< endl;
            if(tem == b) return true;
            if(!visited[tem]){
                visited[tem] = 1;
                q.push(tem);
            }
        }
    }
    return false;
}

void run() {
    fastio;
    cin >> n >> m;
    REP(i,n+1){
        color[i] = 0;
}
    REP(i,m)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        v[a][c].pb(b);
        v[b][c].pb(a);
        color[c ] =1;
    }
    int q;
    cin >> q;
    while(q--)
    {
        ll a,b;
        ll counter = 0;
        cin >> a >> b;
        REP(i,101)
        {
            if(color[i]) {if(solve(a,b,i)) counter++;}
        }
        cout << counter << endl;
    }

}

int main() {
	run();
	return 0;
}
