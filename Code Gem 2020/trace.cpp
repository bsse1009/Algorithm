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

const int MAXN = 104;
ll n;

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
    ll tt = 0;
    while(tc--)
    {
        tt++;
        cin >> n;
        ll arr [n][n];
        ll t = 0,r = 0, c = 0;
        REP(i,n)
        {
            REP(j,n)
            {
                cin >> arr[i][j];
                if(i==j) t+=arr[i][j];
            }
        }

        REP(i,n)
        {
            bool flag = false;
            REP(j,n-1)
            {
                for(int k = j+1; k < n; k++)
                {
                    if(arr[i][j] == arr[i][k]) {
                            r++;
                            flag = true;
                            break;
                    }
                }
                if(flag)
                    break;
            }
        }

        REP(i,n)
        {
            bool flag = false;
            REP(j,n-1)
            {
                for(int k = j+1; k < n; k++)
                {
                    if(arr[j][i] == arr[k][i]){
                            c++;
                            flag = true;
                            break;
                    }
                }
                if(flag)
                    break;
            }
        }

        cout << "Case #" << tt << ": " << t << " " << r << " " << c << endl;

    }

}


int main() {
	run();
	return 0;
}

