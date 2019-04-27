#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
using namespace std;

int V;
int graph[100][100] ;
int rGraph[100][100];

bool bfs( int s, int t, int parent[])
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v=0; v<V; v++)
        {
            if (visited[v]==false && rGraph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return (visited[t] == true);
}

int fordFulkerson(int s, int t)
{
    int u, v;
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
             rGraph[u][v] = graph[u][v];

    int parent[V];
    int max_flow = 0;
    while (bfs( s, t, parent))
    {
        int path_flow = INT_MAX;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }
    return max_flow;
}

int main()
{
    int E;
    cin >> V >> E;

    for (int i = 0; i < E; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        graph [x][y] = z;
    }

    cout << "The maximum possible flow is " << fordFulkerson(0, 5);

    return 0;
}

