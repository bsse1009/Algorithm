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
vector<pair<pll,int> > v;

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
    int tc, tt = 0;
    cin >> tc;
    while(tc--)
    {
        tt++;
        ll n;
        bool flag = true;
        cin >> n;
        string ans (n,'?');
        v.clear();
        REP(i,n)
        {
            ll a,b;
            cin >> a >> b;
            v.pb(mp(mp(a,b),i));
        }
        sort(v.begin(),v.end());
        int C = 0, J = 0;
        REP(i,n)
        {
            int low = v[i].first.first;
            int high = v[i].first.second;
            int id = v[i].second;
            if(C <= low)
            {
                C = high;
                ans[id] = 'C';
            }
            else if (J <= low)
            {
                J = high;
                ans[id] = 'J';
            }
            else{
                cout <<"Case #" << tt << ": " << "IMPOSSIBLE\n";
                flag = false;
                break;
            }
        }

       /* ll previous1 = v[0].first.second, previous2 = 0;
        char s1 = 'C', s2 = 'J';
        int id = v[0].second;
        ans[id-1] = s1;
        REP(i,n)
        {
            //cout << previous1 << " " << previous2 << endl;
            id = v[i].second -1;
            if(v[i].first.first < previous1)
            {
                if(v[i].first.first < previous2)
                {
                    cout <<"Case #" << tt << ": " << "IMPOSSIBLE\n";
                    flag = false;
                    break;
                }
                ans[id] = s2;
                char temp = s1;
                s1 = s2;
                s2 = temp;
            }
            else{
                ans[id] = s1;
            }
            previous2 = previous1;
            previous1 = v[i].first.second;
        }*/
        if(flag) cout <<"Case #" << tt << ": "  << ans << endl;
    }

}


int main() {
	run();
	return 0;
}

