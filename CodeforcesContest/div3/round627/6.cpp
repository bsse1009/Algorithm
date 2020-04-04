
#include <bits/stdc++.h>

using namespace std;

#define ll long long;
const int N = 100005;
int n,m;

vector <int> v[N];
bitset<N> visited;

int cat[N];
int maxi [N];

void bfsUtil(int s)
{
    for (int i = 0; i < n; i++)
        visited [i] = 0;
    queue <int> st;
    int counta = 0, countb = 0;
    st.push(s);
    visited [s] = 1;

    while(!st.empty())
    {
        int u = st.front();
        st.pop();

        for (int i = 0; i < v[u].size(); i++)
        {

            if (visited[v[u][i]] == 0)
            {
                int tem = v[u][i];
                visited[tem] = 1;
                if(cat[tem] == 1)
                    counta++;
                else
                    countb++;
                if(abs(counta - countb) > maxi[s])
                    maxi[s] = abs(counta - countb);
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
        maxi[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        bfsUtil(i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << maxi[i] << " ";
    }
    cout << endl;
    return 0;
}
