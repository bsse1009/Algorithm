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

const int MAXN = 200009;
ll n;
ll arr[MAXN];
void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

void solve() {
    ll posa = 0, nega = 0;
    bool posb = false;
    bool negb = false;
    int flag = 0;
    ll maxi1 = -1e10+5;
    ll maxi2 = 0;
    if (arr[0] >= 0)
    {
        maxi2 = max(maxi2,arr[0]);
        posb = false;
        negb = true;
        flag = 0;
    }
    else{
        maxi1 = max(maxi1,arr[0]);
        posb = true;
        negb = false;
        flag = 1;
    }
    for(int i = 1; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            if(flag){
                nega +=  maxi1;
                maxi1 = -1e10+5;
            }
            flag = 0;
            maxi2 = max(maxi2, arr[i]);

        }

        if(arr[i] < 0)
        {
            if(!flag){
                posa +=  maxi2;
                maxi2 = 0;
            }
            flag = 1;
            maxi1 = max(maxi1, arr[i]);
        }
    }
    if (flag) nega += maxi1;
    else posa += maxi2;
    cout << posa+nega << endl;

}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        REP(i,n) cin >> arr[i];
        solve();
    }

}


int main() {
	run();
	return 0;
}


