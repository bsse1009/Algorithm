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

ll n,m;
const int MAXN = 2000005;
vector <int> adj[MAXN];
int visited [MAXN];
int dist[MAXN];
priority_queue <ll> pq;
ll lf;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

void bfs (int s)
{
    for (int i = 0; i < n; i++)
        visited [i] = 0;
    queue <int> q;
    q.push(s);
    visited [s] = 1;
    dist[s] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                dist[v] = dist[u]+1;
                if (adj[v].size() == 1){
                    pq.push(dist[v]);
                    lf++;
                }

                q.push(v);
            }
        }
    }
}

void run() {
    fastio;
    cin >> n >> m;
    REP(i,n-1){
        int a,b;
        cin >> a >> b;
        adj[a].push_back (b);
        adj[b].push_back (a);
    }
    bfs(1);
    ll sum = 0;
    ll diff = 0;
    if(lf < m)
    {
        diff = m-lf;
        ll high = pq.top();
        pq.pop();
        while(diff){
            ll tem = pq.top();
            pq.pop();
            ll itr = 0;
            while(high >= tem && diff--)
            {
                high--;
                itr++;
            }
            sum += itr*(high);
            high = tem;
        }
    }
    m -= diff;
    while(m--)
    {
        sum += pq.top();
        pq.pop();
    }
    cout << sum << endl;
}


int main() {
	run();
	return 0;
}

