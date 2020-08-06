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

const int MAXN = 1000000;
ll n,m;
ll arr[MAXN];
vector<ll> v;
set <ll> s;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin);}

/* ------------------main section-------------! */

ll solve() {
    ll ans = 0;
    ll uni = s.size();
    //cout << uni << endl;
    ll  same = 1;
    ll counter = 1;
    REP(i,n-1)
    {
        //cout << same << " " << counter << endl;
        if (arr[i] == arr[i+1]) {counter++;continue;}
        if (counter > same){ same = counter; counter = 1;continue;}
        counter = 1;
    }
    if (counter > same) same = counter;
    //cout << same << endl;
    if(same == uni) ans = same-1;
    else ans = min(same, uni);
    return ans;
}

void run() {
    fastio;
    //from_file();
    int tc;
    cin >> tc;
    while(tc--)
    {
        s.clear();
        cin >> n;
        REP(i,n)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        sort (arr, arr+n);
        cout << solve() << endl;
    }

}


int main() {
	run();
	return 0;
}

