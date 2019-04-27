#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector <int> adj [MAX];
stack<int> s;
bool *visited;
int n;

void topoSortUtil(int i)
{
	visited[i] = true;
	for(int j=0;j<adj[i].size();j++)
	{
		int node = adj[i][j];
		if(!visited[node])
            topoSortUtil(node);
	}
	s.push(i);
}

void topoSort()
{
    visited [n] = {false};
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
			topoSortUtil(i);
	}
}
void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main()
{
	cin>>n;
	visited = new bool[n];
    int a,b;
    for(int j=0;j<n;j++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }
	topoSort();
	display();
}
