#include <bits/stdc++.h>

using namespace std;

#define inf 1 << 30  // 2^30


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

void dijkstra(vector<int>g[], vector <int>cost[], int numEdges, int source)
{
    int distance[numEdges+1];
    for (int i = 0; i < numEdges+1; i++)
    {
        distance[i] = inf;
    }
    priority_queue <node> q;
    q.push(node(source,0));
    distance[source] = 0;

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
            }

        }
    }

    for (int i = 1; i <= numEdges; i++)
    {
        cout << source << "-->" << i  << "-->" << distance[i] << endl;
    }
}

int main (void)
{
    vector <int> g[1000];
    vector <int> cost[1000];
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

    int source;
    cin >> source;
    dijkstra(g,cost,numEdges,source);

    return 0;
}
