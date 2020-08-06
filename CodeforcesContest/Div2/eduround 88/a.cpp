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
ll arr[MAXN];
vector<ll> v;
vector<pll>v2;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

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
        double h,c,t;
        cin >> h >> c >> t;
        if(h == t) cout << 1 << endl;
        else{
            ll cont = 0;
            bool flag = true;
            double diff = 0;
            double break_diff = t;
            double t1 = t;
            while(1)
            {
                if(flag){
                    t1 = (h+t1)/2.0; flag = false;
                    diff = abs(t1-t);
                    cont++;
                }
                else if(!flag)
                {
                    t1 = (c+t1)/2.0;
                    flag = true;
                    cont++;
                    double diff = abs(t-t1);
                    if(break_diff > diff) break_diff = diff;
                    else break;
                }
            }
            cout << cont-2 << endl;

        }
    }

}


int main() {
	run();
	return 0;
}

