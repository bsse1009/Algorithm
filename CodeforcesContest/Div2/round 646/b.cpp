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
        string s;
        cin >> s;
        int n = s.length();
        vector<int>v;
        int c = 0;
        int com = s[0];
        REP(i,n)
        {
            if(s[i]!=com)
            {
                v.pb(c);
                com = s[i];
                c = 0;
            }
            c++;
        }
        v.pb(c);
        int sz = v.size();
        //cout << v[0] << v[1]<< endl;
        if(sz <= 2){ cout << 0 << endl;continue;}
        int tot1=0, tot2=0;
        REP(i,sz)
        {
            //cout << v[i] << endl;
            if(i%2) tot1+=v[i];
            else tot2+=v[i];
        }
        cout << min(tot1,tot2) << endl;

    }

}


int main() {
	run();
	return 0;
}

