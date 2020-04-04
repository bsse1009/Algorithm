#include <bits/stdc++.h>

using namespace std;

#define ll long long;
const int N = 100005;
int n,m;

vector <int> v[N];
bitset<N> visited;

int cat[N];

void dfsUtil(int s)
{
    for (int i = 0; i < n; i++)
        visited [i] = 0;
    stack <int> st;
    st.push(s);
    visited [s] = 1;

    while(!st.empty())
    {
        int u = st.top();
        st.pop();

        for (int i = 0; i < v[u].size(); i++)
        {

            if (visited[v[u][i]] == 0)
            {
                int tem = v[u][i];
                if (cat[tem] !=0 )
                    cat[tem] += cat[u];
                if(cat[tem] <= m){
                    visited[tem] = 1; st.push(tem);
                }
            }
        }
    }
}

int main(void)
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }

    for (int i = 1; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfsUtil(1);

    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if(visited[i] == 1 && v[i].size() == 1)
            ans++;
    }

    cout << ans;

    return 0;
}
