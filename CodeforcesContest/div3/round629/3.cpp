#include <bits/stdc++.h>

using namespace std;

#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,1,n)
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n) FORE(i,0,n)
#define FORSZ(i,a,v) FOR(i,a,SZ(v))
#define REPSZ(i,v) REP(i,SZ(v))

typedef long long ll;
ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }
ll n;
const int MAXN = 200000;
ll arr[MAXN];

void run() {
    fastio;
    //freopen("input.txt","r", stdin);
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        string s,ans1 = "1", ans2 = "1";
        cin >> s;
        ll l = s.length();
        bool first = true;
        REP(i,l)
        {
            if(s[i] == '0')
            {
                ans1 += "0"; ans2 += "0";
            }
            if(s[i] == '1')
            {
                if(first){
                    ans1 += "1"; ans2 += "0"; first = false;
                }
                else{
                    ans1 += "0"; ans2 += "1";
                }
            }

            if(s[i] == '2')
            {
                if(first){
                    ans1 += "1"; ans2 += "1";
                }
                else{
                    ans1 += "0"; ans2 += "2";
                }
            }

        }
        cout << ans1 << endl << ans2 << endl;
    }

}


int main() {
	run();
	return 0;
}

