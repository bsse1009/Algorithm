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

const int MAXN = 4005;
ll n,m;
ll g[MAXN][MAXN];
ll degree[MAXN];

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
    cin >> n >> m;
    ll a[m], b[m];
    int mindegree=1000000;
    memset(degree, 0, sizeof degree);
    memset(g, 0, sizeof g);
    int flag=0;
    REP(i,m)
    {
        cin >> a[i] >> b[i];
        g[a[i]][b[i]] = 1;
        g[b[i]][a[i]] = 1;
        degree[a[i]]++;
        degree[b[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=a[i] && j!=b[i] && g[j][a[i]]==1 && g[j][b[i]]==1)
            {
                flag=1;
                if(degree[j]+degree[a[i]]+degree[b[i]]-6<mindegree)
                {
                    mindegree=degree[j]+degree[a[i]]+degree[b[i]]-6;
                }
            }
        }
    }

    if(flag==1)
    {
        cout << mindegree;
    }
    else
        cout << -1 << endl;
}


int main() {
	run();
	return 0;
}

