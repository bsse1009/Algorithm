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

const int MAXN = 3010;
ll n;
vector<ll> cont(MAXN,0);
bitset<MAXN> isPrime;


void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

void primeFactors()
{
    isPrime[1] = 1;
    for(int i = 4; i < MAXN; i+=2) isPrime[i] = 1;
    for(int i = 3; i <= sqrt(MAXN); i+=2)
    {
        if(isPrime[i]) continue;
        for(int j = i*i; j < MAXN; j+=i) isPrime[j] = 1;
    }
    for(int i = 2; i < MAXN; i++)
    {
        if(isPrime[i]) continue;
        //cout << i << endl;
        for(int j = i; j < MAXN; j+=i) cont[j]++;
    }
}


ll solve() {
    ll ans = 0;
    primeFactors();
    for(int i = 2; i <= n; i++)
    {
        if(cont[i] == 2) ans++;
    }
    return ans;
}

void run() {
    fastio;
    cin >> n;
    //cout << n << endl;
    cout << solve() << endl;
}


int main() {
    #ifndef ONLINE_JUDGE
        from_file();
    #endif
	run();
	return 0;
}
