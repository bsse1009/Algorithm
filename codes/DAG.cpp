#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector <int> adj [MAX];
stack<int> s;
bool *visited;
bool *recArr;
int n;

bool isCyclicUtil (int i)
{
    if (recArr[i])  return true;
    if (visited[i]) return false;
    visited[i] = true;
    recArr[i] = true;
    for(int j=0; j<adj[i].size(); j++)
    {
        int node = adj[i][j];
		if(isCyclicUtil(node)) return true;
    }
    recArr[i] = false;
    return false;
}

bool isCyclic ()
{
    visited = new bool[n];
    recArr = new bool[n];
    for(int i = 0; i < n; i++)
    {
        visited[i] = false;
        recArr[i] = false;
    }
    for (int i = 0; i < n; i++)
            if (isCyclicUtil(i)) return true;

    return false;
}

int main (void)
{
    cin>>n;
    int a,b;
    for(int j=0;j<n;j++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }
    if (isCyclic())
        cout << "Graph Contains Cycle\n";
    else
        cout << "Graph doesn't Contain Cycle\n";
    return 0;
}
