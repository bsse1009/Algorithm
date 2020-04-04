#include <bits/stdc++.h>

using namespace std;

vector <int> adj[100];
int visited [100];
int dist[100];
int p[100];

void bfs (int s, int n)
{
    for (int i = 0; i < n; i++)
        visited [i] = 0;
    queue <int> q;
    q.push(s);
    visited [s] = 1;
    dist[s] = 0;
    p[s] = s;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            if (visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                dist[v] = dist[u]+1;
                p[v] = u;
                q.push(v);
            }
        }
    }
}


void shortestPath(int s, int t)
{
    if (visited[t] == 0)
        return;
    vector <int> path;
    path.push_back(t);
    int now = t;
    while(now != s)
    {
        now = p[now];
        path.push_back(now);
    }
    reverse(path.begin(),path.end());
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back (b);
        adj[b].push_back (a);
    }

    bfs(1,n);
    int t;
    cin >> t;
    shortestPath(1,t);
}
