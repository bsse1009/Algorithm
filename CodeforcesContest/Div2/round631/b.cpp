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
        ll mx = 0;
        v.clear();
        REP(i,n)
        {
            cin >> arr[i];
            if (arr[i] > mx) mx = arr[i];
        }
        ll mn = n - mx;

        ll sum1 = mx*(mx+1)/2;
        ll sum2 = mn*(mn+1)/2;

        set<ll> s1,s2,s3,s4;
        ll ans1=0,ans2=0,ans3=0,ans4=0;

        REP(i,mn){
            ans1 += arr[i];
            s1.insert(arr[i]);
        }
        REP(i,mx){
            ans2 += arr[i];
            s2.insert(arr[i]);
        }
        for(int i = mn; i < n; i++)
        {
            ans3 += arr[i];
            s3.insert(arr[i]);
        }

        for(int i = mx; i < n; i++)
        {
            ans4 += arr[i];
            s4.insert(arr[i]);
        }
        ll counter = 0;
        if(sum1 == ans3 && s3.size() == mx && sum2 == ans1 && s1.size() == mn) {
                counter++;
                v.pb(mp(mn,mx));
         }
        if(sum1 == ans2 && s2.size() == mx && sum2 == ans4 && s4.size() == mn) {counter++; v.pb(mp(mx,mn));}

        cout << counter << endl;
        REP(i,v.size()) cout << v[i].first << " " << v[i].second << endl;
    }

}



int main() {
	run();
	return 0;
}

