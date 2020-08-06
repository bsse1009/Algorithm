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

ll n,m;
vector<ll> arr;

//void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */
    
void solve() {
  
}


void run() {
    fastio;
    cin >> n;
    cout << n << " ";
    while(n>1)
    {
        if(n%2 == 0)
        {
            n/=2;
        }
        else n = n*3+1;
        cout << n << " ";
    }

}


int main() {
    //#ifndef ONLINE_JUDGE
      //  from_file();
   // #endif
    run();
    return 0;
}
