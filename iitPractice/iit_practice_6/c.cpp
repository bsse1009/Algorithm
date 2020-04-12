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
ll n,k;
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
    string s;
    cin >> n >> s;
    ll sum = 0;
    REP(i,n)
    {
        sum += s[i] - '0';
        int j = i+1;
        ll sum2 = 0;
        int ok = 0;
        for(j; j < n; j++)
        {
            sum2 += s[j++] - '0';
            int k = j;
            for (k; k < n && sum2+s[j] - '0' <= sum; k++)
            {
                sum2 += s[k] - '0';
                j++;
            }

            if(sum2 != sum) ok = 1;
        }
        if (sum2 != sum) ok = 1;
        if (!ok){
                cout << "YES\n";
                return;
        }
    }
    cout << "NO\n";
}


int main() {
	run();
	return 0;
}

