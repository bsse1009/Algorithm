#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

int n,source;
vector<vector<int> >graph;
vector<int> dist;

void createGraph()
{
	graph.resize(n);
	for (int i = 0; i < n; i++)
	{
		graph[i].resize(n);
		for (int j = 0; j < n; j++)
		{
			cin>>graph[i][j];
				if(graph[i][j] == -1)
					graph[i][j] = INF;
		}
	}
	dist.resize(n);
	fill(dist.begin(),dist.end(),INF);
}
void Bellman_Ford()
{
    dist[source] = 0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(graph[i][j] != INF && dist[j] > dist[i] + graph[i][j])
			{
				dist[j] = dist[i] + graph[i][j];
			}
		}
	}
}

bool isNegativeCycle()
{
	int i=n-1;
	for(int j=0;j<n;j++)
	{
		if(graph[i][j] != INF && dist[j] > dist[i] + graph[i][j])
		{
			return true;
		}
	}
	return false;
}

void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<"0 -> "<<i<<" = "<<dist[i]<<endl;
	}
}
int main()
{
	cin>>n>>source;
	createGraph();
	Bellman_Ford();
	cout<<"Negative Cycles : "<<isNegativeCycle()<<endl;
 	display();
}
