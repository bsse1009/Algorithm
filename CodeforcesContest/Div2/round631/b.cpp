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
ll n;
int arr[MAXN];
vector <pll> v;

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
        cin >> n;
        REP(i,n)
        {
            cin >> arr[i];
        }
        v.clear();
        ll counter = 0;
        REP(i,n-1)
        {
            ll n1 = i+1;
            ll n2 = n-n1;
            ll sum1 = 0, sum2 = 0;
            ll ans1 = n1*(n1+1)/2;
            ll ans2 = n2*(n2+1)/2;
            set <int, greater <int> >s1,s2;

            REP(j,n1) {
                sum1 += arr[j];
                s1.insert(arr[j]);
            };
            for (int j = n1; j < n; j++) {sum2 += arr[j]; s2.insert(arr[j]);}

            if (sum1 == ans1 && sum2 == ans2 && s1.size() == n1 && s2.size() == n2){
                counter++;
                v.pb(mp(n1,n2));
            }
        }
        cout << counter << endl;
        REP(i,counter) cout << v[i].first << " " << v[i].second << endl;
    }

}



int main() {
	run();
	return 0;
}

