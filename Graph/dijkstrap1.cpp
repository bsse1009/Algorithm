#include <bits/stdc++.h>

using namespace std;

#define inf 1 << 30  // 2^30

vector <int> g[100002];
vector <int> cost[100002];
int path [100002];

struct node{
    int u,cost;
    node(int _u, int _cost)
    {
        u = _u;
        cost = _cost;
    }
    bool operator < (const node &p) const{
        return cost > p.cost;
    }
};

void dijkstra(int source, int nNode)
{
    long long distance[nNode+1];

    for (int i = 0; i < nNode+1; i++)
    {
        distance[i] = inf;
    }
    priority_queue <node> q;
    q.push(node(source,0));
    distance[source] = 0;
    path[source] = 1;

    while(!q.empty())
    {
        node p = q.top();
        q.pop();
        int u = p.u;
        for (int i =0; i < (int)g[u].size(); i++)
        {
            int v = g[u][i];
            if(distance[u] + cost [u][i] < distance [v])
            {
                distance [v] = distance[u] + cost [u][i];
                q.push(node(v,distance[v]));
                path[v] = u;
            }

        }
    }
}

int main (void)
{
    int numNodes;
    int numEdges;
    cin >> numNodes >> numEdges;

    for (int i = 0; i < numEdges; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    //int path [numNodes+1];    st.push(u);

    dijkstra(1, numNodes);
    stack <int> st;
    int u = numNodes;
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

