#include<bits/stdc++.h>

using namespace std;

#define inf 1<<30;

vector <int> g[100002];
vector <int> cost[100002];
long long path[100002];
//long long distance[100002];
int n,m;


struct node{
    int u,cost;
    node(int _u, int _cost)
    {
        u = _u;
        cost = _cost;
    }
};

bool operator<(node A, node B)
{
    return A.cost > B.cost;
}

void dijkstra(int s)
{
    long long distance[n+1];
    for (int i = 0; i <= n; i++)
    {
        distance[i] = inf;
    }
    priority_queue<node>q;
    distance[s] = 0;
    q.push(node(s,0));
    path[s] = 1;

    while(!q.empty())
    {
        node p = q.top();
        q.pop();
        int u = p.u;

        for (int i = 0; i < g[u].size(); i++)
        {
            int v = g[u][i];
            if(distance[u] + cost[u][i] < distance[v])
            {
                distance[v] = distance[u] + cost[u][i];
                q.push(node(v,distance[v]));
                path[v] = u;
            }
        }
    }
}

int main (void)
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    dijkstra(1);
    stack <int> st;
    int u = n;
    if (path[u] == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    st.push(u);
    while(path[u] != 1)
    {
        u = path[u];
        st.push(u);
    }
    st.push(1);
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
