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

const int MAXN = 20000000;

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.c","r",stdin); freopen("output.c","w",stdout);}

/* ------------------main section-------------! */

ll solve() {
    ll ans = 0;

    return ans;
}

void run() {
    fastio;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,d;
        ll x,y,x1,y1,x2,y2;
        bool  flag = false;
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        if(x == x1 && x == x2 && ((a > 0) || (b > 0))){
            cout << "NO" << endl;
            continue;
        }
        else if(y == y1 && y == y2 && ((c > 0) || (d > 0))){
            cout << "NO" << endl;
            continue;
        }

        ll left = a-b;
        ll right = b-a;
        ll up = d-c;
        ll down = c-d;

        if(left > 0) x -= left;
        if(right > 0) x += right;
        if(up > 0) y += up;
        if(down > 0) y -= down;

        //cout <<endl<< x << " " << y << endl;


        if(x >= x1 && x <= x2)
        {
            if(y >= y1 && y <= y2){cout << "YES" << endl; continue;}

        }
        cout << "NO" << endl;
    }

}


int main() {
	run();
	return 0;
}

