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
vector<ll> v;
set<char>s;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */
bool isPalindrome(string s)
{
    string tem = s;
    reverse(s.begin(), s.end());
    if(tem == s) return true;
    return false;
}

void solve(string a) {
    if(isPalindrome(a))
    {
        char f = a[0];
        int se;
        for(int i = 1; i < n; i++)
        {
            if(f != a[i]){
                se = i;
                break;
            } 
        }
        swap(a[se], a[n-1]);
        cout << a << endl;
    }
    else cout << a << endl;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        string a;
        s.clear();
        cin >> a;
        n = a.length();
        REP(i,n)
        {
            s.insert(a[i]);
        }
        if(s.size() == 1) cout << -1 << endl;
        else{
            solve(a);
        }
    }

}


int main() {
    #ifndef ONLINE_JUDGE
        from_file();
    #endif
	run();
	return 0;
}
