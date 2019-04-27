#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector <int> edges [MAX];
vector <int> rev_edges [MAX];

stack<int> s;
bool *visited;
int n,e;

void dfs1 (int i)
{
    visited[i] = true;
	for(int j=0;j<edges[i].size();j++)
	{
		int node = edges[i][j];
		if(!visited[node])
            dfs1(node);
	}
	s.push(i);
}

void dfs2 (int source)
{
    visited[source] = true;
    cout << source << " ";

    for(int j=0;j<rev_edges[source].size();j++)
	{
		int node = edges[source][j];
		if(!visited[node])
            dfs2(node);
	}

}

void print_ssc()
{
    visited = new bool [n];
    for(int i = 0; i < n; i++)
        visited[i] = false;

    for (int i = 0; i < n; i++)
        if (visited[i] == false)
            dfs1(i);

    for (int i = 0; i < n; i++)
            visited[i] = false;

    while (!s.empty())
    {
        int v = s.top();
        s.pop();
        if (!visited[v])
        {
            dfs2(v);
            cout << endl;
        }
    }

}

int main (void)
{
    cin >> n >> e;
	visited = new bool[n];
    int a,b;
    for(int j=0;j<e;j++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        rev_edges [b].push_back(a);
    }
    print_ssc();
}
