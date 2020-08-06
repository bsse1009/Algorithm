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

const int MAXN = 2010;
ll n,m;
ll arr[MAXN];
vector<ll> even, odd;
vector<pll>ans;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        odd.clear();
        even.clear();
        ans.clear();

        cin >> n;
        REP(i,2*n)
        {
            cin >> arr[i];
            if(arr[i]%2) odd.pb(i+1);
            else even.pb(i+1);
        }
        //cout << odd.size() << endl;
        for (int i = 0; i+1 < odd.size(); i+=2){
            //cout << odd[i] << " " << odd[i+1] << endl;
            ans.pb(mp(odd[i],odd[i+1]));
        }
        for (int i = 0; i+1 < even.size(); i+=2){
            //cout << even[i] << " " << even[i+1] << endl;
            ans.pb(mp(even[i],even[i+1]));
        }

        REP(i,n-1) cout << ans[i].first << " " << ans[i].second << endl;
    }

}


int main() {
	run();
	return 0;
}

