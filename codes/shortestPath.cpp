#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

vector <int> edges[MAX];
vector <int> cost[MAX];
int numNodes, numEdges;
int distance [MAX];

void bfs (int source,int v)
{
    priority_queue<int, vector<int>, greater<int> > q;
    q.push(source);
    distance [source] = 0;
    while (!q.empty())
    {
        int u = q.top();
        q.pop();
        cout << u << " ";

        for (int i = 0;i < edges [u].size(); i++)
        {
            if(distance[u] + cost[u][i] < distance[edges[u][i]])
            {
                distance [edges[u][i]] = distance[u] + cost[u][i];
                q.push(edges[u][i]);
            }
        }
    }
}

int main (void)
{
      cin >> numNodes >> numEdges;

      for (int i = 1; i <= numEdges; i++) {
        int x, y, w;

        cin >> x >> y >> w;

        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(w);
        cost[y].push_back(w);
      }
    int s;
    cin >> s;
    bfs(s,numNodes);

    for (int i = 0; i < numNodes; i++)
    {
        cout << distance [i] << endl;
    }

    return 0;
}
